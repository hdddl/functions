#include "utils.hpp"
#include <iostream>

using namespace std;

void printBinary(unsigned char value)
{
    for (int i = 7; i >= 0; --i)
    {
        // 使用位运算和位操作符访问每个位
        bool bit = (value & (1 << i)) != 0;

        // 输出每个位的值（0或1）
        cout << bit;
    }
}

void printAsBin(unsigned char *nums, unsigned int len)
{
    for(unsigned int i = 0; i < len; i++){
        printBinary(nums[i]);
        cout << " | " ;
    }    
    cout << endl;
}

void printAsHex(unsigned char *nums, unsigned int len)
{
    for(int i = 0; i < 8; i++)
    {
        cout << hex << static_cast<int>(nums[i])  << " | ";
    }
    cout << endl;
}