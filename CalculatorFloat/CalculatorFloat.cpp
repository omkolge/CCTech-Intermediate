#include <iostream>
#include <cassert>
#include <Climits>
#include <cmath>
#include<iomanip>
#include<float.h>

using namespace std;

void checkRange(double num1, double num2);

void addFunc(double number_1, double number_2);

void substractFunc(double number_1, double number_2);

void multiplicationFunc(double number_1, double number_2);

void divisionFunc(double number_1, double number_2);

int main()
{
    cout << fixed;
    try
    {
        bool exit = false;
        double num1, num2;
        int ch;
        while (!exit)
        {
            cout << "\nPress key as following :- ";
            cout << "\nfor sum enter 1";
            cout << "\nfor substraction enter 2";
            cout << "\nfor multiplication enter 3";
            cout << "\nfor division enter 4 ";
            cout << "\nfor exit enter 0";
            cout << "\n\n Enter your choice => ";
            cin >> ch;
            switch (ch)
            {
            case 0:
                exit = true;
                break;

            case 1:
                cout << "Enter the two numbers " << endl;
                cin >> num1 >> num2;
                checkRange(num1, num2);
                addFunc(num1, num2);
                break;

            case 2:
                cout << "Enter the two numbers " << endl;
                cin >> num1 >> num2;
                checkRange(num1, num2);
                substractFunc(num1, num2);
                break;

            case 3:
                cout << "Enter the two numbers " << endl;
                cin >> num1 >> num2;
                checkRange(num1, num2);
                multiplicationFunc(num1, num2);
                break;

            case 4:
                cout << "Enter the two numbers " << endl;
                cin >> num1 >> num2;
                checkRange(num1, num2);
                divisionFunc(num1, num2);
                break;
            }
        }
    }
    catch (runtime_error& e)
    {
        cout << "Exception occurred" << endl
            << e.what();
    }
    return 0;
}

void checkRange(double num1, double num2)
{
    if ((num1 > DBL_MAX || num1 < DBL_MIN) || (num2 > DBL_MAX || num2 < DBL_MIN))
    {
        throw runtime_error("Math error: Input value out of range");
    }
}

void addFunc(double number_1, double number_2)
{
    if ((number_1 >= DBL_MAX && number_2 > 0) || (number_2 >= DBL_MAX && number_1 > 0))
    {
        double addition = 0;
        if ((addition = number_1 + number_2) >= DBL_MAX)
        {
            throw runtime_error("Math error: Out of range");
        }
        else
        {
            addition = number_1 + number_2;
            cout << "\nAddition : " << addition;
        }
    }
    else
    {
        cout << "\nAddition: " << number_1 + number_2;
    }
}

void substractFunc(double number_1, double number_2)
{
    double diff;
    if ((number_2 > 0 && number_1 < DBL_MIN + number_2) || (number_2 < 0 && number_1 < DBL_MIN + number_2))
    {
        throw runtime_error("Math error: Out of range");
    }
    else
    {
        diff = number_1 - number_2;
    }
    cout << endl
        << "substraction : " << diff;
}

void multiplicationFunc(double number_1, double number_2)
{
    double mult = number_1 * number_2;
    if ((mult > DBL_MAX) || (mult < DBL_MIN))
    {
        throw runtime_error("Math error: Out of range");
    }
    else
    {
        cout << "\nMultiplication : " << mult;
    }
}

void divisionFunc(double number_1, double number_2)
{
    if (number_2 == 0 || ((number_1 == DBL_MIN) && (number_2 == -1)))
    {
        throw runtime_error("Math error: Out of range");
    }
    else
    {
        cout << "\nDivision is :- " << number_1 / number_2 << endl;

    }
}
