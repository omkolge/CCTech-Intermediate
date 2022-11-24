#include <iostream>
#include<cassert>
#include".\SimpleIntrest.h"
using namespace std;

int main()
{
    double principal, rate, year;
    cout << "Enter principle , rate, yaer : "<<endl;
    cin >> principal >> rate >> year;
    SimpleInterest si(principal, rate, year);
    si.calculateSI();

    return 0;
}