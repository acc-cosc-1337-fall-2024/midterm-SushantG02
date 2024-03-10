#include "question1.h"
#include <iostream>

using std::cout; using std::cin; using std::string;


int main()
{
    int value;
    // std::string decimal_hex; 
    while (true)
    {
        cout<<"Enter an integer value between 1 and 512 or enter 0 to exit the system: ";
        cin>>value;

        if (value == 0)
        {
            break;
        }

        if (value < 1 || value > 512)
        {
            cout<<"Invalid number. Please enter between 1 and 512."<<"\n";
            continue;
        }

        string hex = decimal_to_hex(value);
        cout<< "Hexadecimal of "<< value << " is " << hex <<"\n";

    }

    return 0;
}