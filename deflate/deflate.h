#ifndef __S0NNY_DEFLATE_
#define __S0NNY_DEFLATE_

#include <stdint.h>

//deflate - pack
uint8_t *deflate(uint8_t *datastream);
//inflate - unpack
uint8_t *inflate(uint8_t *datastream);

#endif