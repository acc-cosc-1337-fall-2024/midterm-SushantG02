#include "question4.h"
#include<iostream>
using std:: cout; using std:: cin; using std:: string;

int main() 
{
    int option;
    do 
    {
        cout << "Enter a number between 1 and 15 or enter 0 to leave: ";
        cin >> option;
        if (option == 0) 
        {
            cout << "Leaving System." << "\n";
            break;
        }
        if (option < 1 || option > 15) 
        {
            cout << "Invalid input. Please enter number between 1 and 15." << "\n";
            continue;
        } 
       string sequence = get_fib_sequence(option);
       cout << "Fibonacci sequence for " << option << ": " << sequence << "\n";
    } 
    while (true);
    return 0;
}