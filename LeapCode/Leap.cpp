#include <iostream>
#include <assert.h>
using namespace std;

bool isLeapYear(int year);

int main()
{

    int year;
    cout << "Enter a year : ";
    cin >> year;

    assert(isLeapYear(year) == true);

    return 0;
}

bool isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is leap year " << endl;
        return true;
    }
    else
    {
        return false;
    }
}