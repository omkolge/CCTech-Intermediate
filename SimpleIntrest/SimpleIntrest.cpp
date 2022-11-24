#include <string>
#include <iostream>
#include".\SimpleIntrest.h"
using namespace std;
SimpleInterest::SimpleInterest(double principal, double rate, double year)
{
    this->principal = principal;
    this->rate = rate;
    this->year = year;
}

double SimpleInterest::calculateSI()
{

    if (principal == 0 || rate == 0 || year == 0)
    {
       cout << "Rate : " << rate << endl
            << "Year : " << abs(year) << endl
            << "Principal : " << abs(principal) << endl
            << "Interest : 0" << endl
            << "Total Value : " << abs(principal);
       return principal;
    }
    else
    {
        double simpleInterest = (principal * rate * year) / 100;
        cout << "The Simple Interest for : " << endl
            << "Rate : " << abs(rate) << endl
            << "Year : " << abs(year) << endl
            << "Principal : " << abs(principal) << endl
            << "Interest : " << abs(simpleInterest) << endl
            << "Total Value : " << abs(simpleInterest + principal);
        return (simpleInterest + principal);
    }
}