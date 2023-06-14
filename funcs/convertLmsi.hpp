#ifndef __convertLmsi_hpp_
#define __convertLmsi_hpp_

#include <cstdint>

typedef unsigned char uchar;
void covertLmsi(uint32_t* src, uchar dst[8]);
void testConvertLmsi();

#endif