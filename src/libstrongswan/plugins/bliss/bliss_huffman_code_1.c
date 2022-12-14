/*
 * Copyright (C) 2014 Andreas Steffen
 *
 * Optimum Huffman code for BLISS-X signatures
 *
 * This file has been automatically generated by the bliss_huffman utility
 * Do not edit manually!
 */

/*
 * Design: sigma = 215
 *
 *   i  p_z1[i]
 *   0  0.7662277087816564         0 ..  256
 *   1  0.2165251006508514       256 ..  512
 *   2  0.0168930510015114       512 ..  768
 *   3  0.0003522302274478       768 .. 1024
 *   4  0.0000019067136680      1024 .. 1280
 *   5  0.0000000026239598      1280 .. 1536
 *   6  0.0000000000009052      1536 .. 1792
 *   7  0.0000000000000001      1792 .. 2047
 *
 *   k  p_z2[k]  dx = 1024
 *  -1  0.0086781953089156   -1535.5 .. -511.5
 *   0  0.9826436093821688    -511.5 ..  511.5
 *   1  0.0086781953089156     511.5 .. 1535.5
 *
 *  (i, k)  p
 *  (0,-1)  0.0066494737079101
 *  (0, 0)  0.7529287613658361
 *  (0, 1)  0.0066494737079101
 *
 *  (1,-1)  0.0018790471127307
 *  (1, 0)  0.2127670064253900
 *  (1, 1)  0.0018790471127307
 *
 *  (2,-1)  0.0001466011959546
 *  (2, 0)  0.0165998486096022
 *  (2, 1)  0.0001466011959546
 *
 *  (3,-1)  0.0000030567227075
 *  (3, 0)  0.0003461167820328
 *  (3, 1)  0.0000030567227075
 *
 *  (4,-1)  0.0000000165468336
 *  (4, 0)  0.0000018736200007
 *  (4, 1)  0.0000000165468336
 *
 *  (5,-1)  0.0000000000227712
 *  (5, 0)  0.0000000025784174
 *  (5, 1)  0.0000000000227712
 *
 *  (6,-1)  0.0000000000000079
 *  (6, 0)  0.0000000000008895
 *  (6, 1)  0.0000000000000079
 *
 *  (7,-1)  0.0000000000000000
 *  (7, 0)  0.0000000000000001
 *  (7, 1)  0.0000000000000000
 *
 *  p_sum   0.9999999999999998
 *
 * entropy = 1.0195 bits/tuple (521 bits)
 */

#include "bliss_huffman_code.h"

static bliss_huffman_code_node_t nodes[] = {
	{   1,   2,  -1 },  /*   0: */
	{  -1,  -1,   1 },  /*   1: (0, 0)  1 bit  */
	{   3,   4,  -1 },  /*   2: */
	{  -1,  -1,   4 },  /*   3: (1, 0)  2 bits */
	{   5,  46,  -1 },  /*   4: */
	{   6,  45,  -1 },  /*   5: */
	{   7,   8,  -1 },  /*   6: */
	{  -1,  -1,   0 },  /*   7: (0,-1)  5 bits */
	{   9,  44,  -1 },  /*   8: */
	{  10,  11,  -1 },  /*   9: */
	{  -1,  -1,   3 },  /*  10: (1,-1)  7 bits */
	{  12,  13,  -1 },  /*  11: */
	{  -1,  -1,  10 },  /*  12: (3, 0)  8 bits */
	{  14,  29,  -1 },  /*  13: */
	{  15,  22,  -1 },  /*  14: */
	{  16,  19,  -1 },  /*  15: */
	{  17,  18,  -1 },  /*  16: */
	{  -1,  -1,   8 },  /*  17: (2, 1) 12 bits */
	{  -1,  -1,   6 },  /*  18: (2,-1) 12 bits */
	{  20,  21,  -1 },  /*  19: */
	{  -1,  -1,  11 },  /*  20: (3, 1) 12 bits */
	{  -1,  -1,   9 },  /*  21: (3,-1) 12 bits */
	{  23,  26,  -1 },  /*  22: */
	{  24,  25,  -1 },  /*  23: */
	{  -1,  -1,  13 },  /*  24: (4, 0) 12 bits */
	{  -1,  -1,  14 },  /*  25: (4, 1) 12 bits */
	{  27,  28,  -1 },  /*  26: */
	{  -1,  -1,  12 },  /*  27: (4,-1) 12 bits */
	{  -1,  -1,  16 },  /*  28: (5, 0) 12 bits */
	{  30,  37,  -1 },  /*  29: */
	{  31,  34,  -1 },  /*  30: */
	{  32,  33,  -1 },  /*  31: */
	{  -1,  -1,  17 },  /*  32: (5, 1) 12 bits */
	{  -1,  -1,  15 },  /*  33: (5,-1) 12 bits */
	{  35,  36,  -1 },  /*  34: */
	{  -1,  -1,  19 },  /*  35: (6, 0) 12 bits */
	{  -1,  -1,  20 },  /*  36: (6, 1) 12 bits */
	{  38,  41,  -1 },  /*  37: */
	{  39,  40,  -1 },  /*  38: */
	{  -1,  -1,  18 },  /*  39: (6,-1) 12 bits */
	{  -1,  -1,  22 },  /*  40: (7, 0) 12 bits */
	{  42,  43,  -1 },  /*  41: */
	{  -1,  -1,  23 },  /*  42: (7, 1) 12 bits */
	{  -1,  -1,  21 },  /*  43: (7,-1) 12 bits */
	{  -1,  -1,   5 },  /*  44: (1, 1)  6 bits */
	{  -1,  -1,   2 },  /*  45: (0, 1)  4 bits */
	{  -1,  -1,   7 },  /*  46: (2, 0)  3 bits */
};

static bliss_huffman_code_tuple_t tuples[] = {
	{    24,  5 },  /*   0: (0,-1) 11000 */
	{     0,  1 },  /*   1: (0, 0) 0 */
	{    13,  4 },  /*   2: (0, 1) 1101 */

	{   100,  7 },  /*   3: (1,-1) 1100100 */
	{     2,  2 },  /*   4: (1, 0) 10 */
	{    51,  6 },  /*   5: (1, 1) 110011 */

	{  3249, 12 },  /*   6: (2,-1) 110010110001 */
	{     7,  3 },  /*   7: (2, 0) 111 */
	{  3248, 12 },  /*   8: (2, 1) 110010110000 */

	{  3251, 12 },  /*   9: (3,-1) 110010110011 */
	{   202,  8 },  /*  10: (3, 0) 11001010 */
	{  3250, 12 },  /*  11: (3, 1) 110010110010 */

	{  3254, 12 },  /*  12: (4,-1) 110010110110 */
	{  3252, 12 },  /*  13: (4, 0) 110010110100 */
	{  3253, 12 },  /*  14: (4, 1) 110010110101 */

	{  3257, 12 },  /*  15: (5,-1) 110010111001 */
	{  3255, 12 },  /*  16: (5, 0) 110010110111 */
	{  3256, 12 },  /*  17: (5, 1) 110010111000 */

	{  3260, 12 },  /*  18: (6,-1) 110010111100 */
	{  3258, 12 },  /*  19: (6, 0) 110010111010 */
	{  3259, 12 },  /*  20: (6, 1) 110010111011 */

	{  3263, 12 },  /*  21: (7,-1) 110010111111 */
	{  3261, 12 },  /*  22: (7, 0) 110010111101 */
	{  3262, 12 },  /*  23: (7, 1) 110010111110 */
};

/* code_length = 1.3189 bits/tuple (676 bits) */

bliss_huffman_code_t bliss_huffman_code_1 = {
	.n_z1 = 8,
	.n_z2 = 2,
	.tuples = tuples,
	.nodes  = nodes
};
