#pragma once
#include <string>
using namespace std;

class SimpleInterest
{
private:
    double principal;
    double rate;
    double year;

public:
    SimpleInterest()
    {
    }

    SimpleInterest(double principal, double rate, double year);

    double calculateSI();
};