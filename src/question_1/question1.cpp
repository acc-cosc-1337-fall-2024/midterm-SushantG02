#include "question1.h"
#include<iostream>
using std::string;


 string decimal_to_hex(int num)
{
    if (num == 0)
        return "0"; 
    
    std::string hex; 
    
    while (num > 0) {
        hex = (num % 16 < 10 ? std::string(1, '0' + num % 16) : string (1, 'A' + num % 16 - 10)) + hex;
        num /= 16; 
    }
    return hex;
}