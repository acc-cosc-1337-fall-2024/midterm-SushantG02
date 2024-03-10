#include "question2.h"
#include <iostream>
using std::cout; using std::cin; using std:: vector;

int main() {
    char option;

    do {
        int num;

        do {
            cout << "Enter a number from 1 to 60: ";
            cin >> num;
        } while (num < 1 || num > 60);

        cout << "Prime numbers to " << num << " are: ";
        for (int i = 2; i <= num; ++i) 
        {
            if (is_prime(i)) 
            {
                cout << i << " "<<"\n";
            }
        }
        cout << "Do you want to continue (y/n)? ";
        cin >> option;
    } while (option == 'y' || option == 'Y');

    return 0;
}