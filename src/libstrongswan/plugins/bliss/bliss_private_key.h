/*
 * Copyright (C) 2014 Andreas Steffen
 *
 * Copyright (C) secunet Security Networks AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup bliss_private_key bliss_private_key
 * @{ @ingroup bliss_p
 */

#ifndef BLISS_PRIVATE_KEY_H_
#define BLISS_PRIVATE_KEY_H_

#include <credentials/builder.h>
#include <credentials/keys/private_key.h>

typedef struct bliss_private_key_t bliss_private_key_t;

/**
 * Private_key_t implementation of BLISS signature algorithm.
 */
struct bliss_private_key_t {

	/**
	 * Implements private_key_t interface
	 */
	private_key_t key;
};

/**
 * Generate a BLISS private key.
 *
 * Accepts the BUILD_KEY_SIZE argument.
 *
 * @param type		type of the key, must be KEY_BLISS
 * @param args		builder_part_t argument list
 * @return 			generated key, NULL on failure
 */
bliss_private_key_t *bliss_private_key_gen(key_type_t type, va_list args);

/**
 * Load a BLISS private key.
 *
 * Accepts BUILD_BLISS_* components.
 *
 * @param type		type of the key, must be KEY_BLISS
 * @param args		builder_part_t argument list
 * @return 			loaded key, NULL on failure
 */
bliss_private_key_t *bliss_private_key_load(key_type_t type, va_list args);

#endif /** BLISS_PRIVATE_KEY_H_ @}*/
