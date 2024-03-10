#include "question3.h"
#include <iostream>
using std:: cout; using std:: cin;

int main() 
{
    char option;
    do 
    {
        double mass, velocity;
        cout << "Enter mass in (kg): ";
        cin >> mass;

        cout << "Enter velocity (meter per second): ";
        cin >> velocity;

        cout << "Kinetic Energy: " << get_kinetic_energy(mass, velocity) << " Joules\n";

        cout << "Would you like to continue (y/n)? ";
        cin >> option;
    } 
    while (option == 'y' || option == 'Y');
    
    cout << "Thank you for using the program.\n";
    return 0;
}