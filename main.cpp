#include <cstdint>
#include <cstring>
#include <memory.h>


typedef unsigned char uchar;

/* covert uint32 to uchar[8]
 *  1. 首先需要明确
 */
void covertLmsi(uint32_t* src, uchar dst[8]){
    for(uint8_t i = 0; i < 4; i++){
        dst[i] = static_cast<uchar>((*src >> (8*(3-i))) & 0xFF);
    }
}


int main(){
    uint32_t src = 0x01ABCDEF;
    uchar dst[8];
    memset(dst, 0, sizeof(dst));
    covertLmsi(&src, dst);

    
}