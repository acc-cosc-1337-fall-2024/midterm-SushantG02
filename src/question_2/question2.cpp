#include "question2.h"
using std:: vector;

bool is_prime(int number)
 {
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; ++i) 
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> primes;
     for (int i = 2; i <= num; ++i) 
     {
        if (is_prime(i)) 
        {
            primes.push_back(i);
        }

     }

return primes;
}

