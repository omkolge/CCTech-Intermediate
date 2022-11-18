#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if(num==1){
        cout<<num<<" is not a prime number.";
    }
    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}