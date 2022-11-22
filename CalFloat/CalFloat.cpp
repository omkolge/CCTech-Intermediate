#include <iostream>
#include <assert.h>
#include <limits.h>
#include <inttypes.h>
#include <iomanip>
#include <cassert>
using namespace std;

double addFunc(double num1, double num2)
{
    double sum = num1 + num2;
    cout << "Addition : " << sum << endl;
    return sum;
}

double substractFunc(double num1, double num2)
{
    double diff = num1 - num2;
    cout << "Substraction :- " << diff << endl;
    return diff;
}

double multiFun(double num1, double num2)
{
    double mul = num1 * num2;
    cout << "Multiplication is :- " << mul << endl;
    return mul;
}

double divFunc(double num1, double num2)
{
    double div;
    if (num2 == 0)
    {
        throw runtime_error("Math error :- denomenator must not be zero");
    }
    else
    {
        div = num1 / num2;
    }

    cout << "Division is :- " << div << endl;
    return div;
}

int main()
{
    cout << fixed << setprecision(3) << endl;
    try
    {
        // assert(addition(-2147483647.45, 214)==-2147483433.450);
        addFunc(-2147483647.45, 214);
        substractFunc(-21.12, 214);
        multiFun(-2, -214);
        divFunc(21, 3);
        divFunc(56, 0);
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl << e.what();
    }
    return 0;
}