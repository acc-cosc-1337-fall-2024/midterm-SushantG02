#include"question4.h"
#include <iostream>
using std::string; 

string get_fib_sequence(int num)
{
   string sequence;
    int p = 0, q = 1;

    for (int i = 0; i <= num; ++i)
     { 
        sequence += std::to_string(p) + " ";
        int next = p + q;
        p = q;
        q = next;
    }
    return sequence;
}
//using std::to_string to convert number to a string.