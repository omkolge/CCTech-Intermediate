#include <iostream>
#include <limits.h>
#include <inttypes.h>
using namespace std;

void validationFunc(int first_number, int second_number);

void sumFunc(int number1, int number2);

void substractFunc(int number1, int number2);

void MultiFunc(int number1, int number2);

int divFunc(int num1, int num2);

int main()
{
    int choice;
    try
    {
        bool exit = false;
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
            case 1:
                validationFunc(-2147483647, 214);
                sumFunc(-2147483647, 214);
                break;
            case 2:
                validationFunc(-21, 214);
                substractFunc(-21, 214);
                break;
            case 3:
                validationFunc(-2, -214);
                MultiFunc(-2, -214);
                break;
            case 4:
                validationFunc(21, 0);
                divFunc(21, 0);
                break;
            case 0:
                exit = true;
                break;
            default:
                cout << "Please Enter correct Input";
                break;
            }
        }
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
    return 0;
}

void validationFunc(int first_number, int second_number)
{
    if ((first_number > INT_MAX && first_number < INT_MIN) || (second_number > INT_MAX && second_number < INT_MIN))
    {
        throw runtime_error("Math error: Input value out of range");
    }
}

void sumFunc(int number1, int number2)
{
    if ((number1 >= INT_MAX && number2 > 0) || (number2 >= INT_MAX && number1 > 0))
    {
        unsigned int sum = number1 + number2;
        cout << "\nsum : " << sum;
    }
    else
    {
        cout << "\nsum : " << number1 + number2;
    }
}

void substractFunc(int number1, int number2)
{
    signed int diff;
    if ((number2 > 0 && number1 < INT_MIN + number2) || (number2 < 0 && number1 > INT_MAX + number2))
    {
        throw runtime_error("Math error: Input value out of range");
    }
    else
    {
        diff = number1 - number2;
    }
    cout << endl
         << "substraction : " << diff;
}

void MultiFunc(int number1, int number2)
{
    cout << "\nMultiplication : " << number1 * number2;
}

int divFunc(int num1, int num2)
{
    int div;
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