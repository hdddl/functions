#include "convertLmsi.hpp"
#include <memory.h>

void covertLmsi(uint32_t *src, uchar *dst)
{
    for(uint8_t i = 0; i < 4; i++){
        dst[i] = static_cast<uchar>((*src >> (8*(3-i))) & 0xFF);
    }
}

void testConvertLmsi()
{
    uint32_t src = 0x01ABCDEF;
    uchar dst[8];
    memset(dst, 0, sizeof(dst));
    covertLmsi(&src, dst);
}