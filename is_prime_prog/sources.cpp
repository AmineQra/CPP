#include <string.h>
#include "sources.h"

bool is_prime(long long int n)
{
    if (n < 2)
        return false;
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (long long int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printNum(long num)
{
    std::cout << num << " is a prime: " << (is_prime(num) ? "True" : "False") << "\n"; 
}