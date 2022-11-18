#include <iostream>
#include <cassert>
#include ".\Prime.cpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num > 0)
    {
        assert(isPrime(num) == true);
        cout<<num<<" is prime number.";
    }else{
        cout<<"Number is greater than 0";
    }
    return 0;
}