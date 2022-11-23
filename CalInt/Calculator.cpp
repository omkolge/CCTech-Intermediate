#include <iostream>
#include <cassert>
#include <Climits>

using namespace std;

void checkRange(long long int num1, long long int num2);

void addFunc(long long int number_1, long long int number_2);

void substractFunc(long long int number_1, long long int number_2);

void multiplicationFunc(long long int number_1, long long int number_2);

int divisionFunc(long long int number_1, long long int number_2);

int main()
{

    try
    {
        bool exit = false;
        long long int num1, num2;
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
                    cout << "Enter the two numbers - " << endl;
                    cin >> num1 >> num2;
                    checkRange(num1, num2);
                    addFunc(num1, num2);
                    break;

                case 2:
                    cout << "Enter the two numbers - " << endl;
                    cin >> num1 >> num2;
                    checkRange(num1, num2);
                    substractFunc(num1, num2);
                    break;

                case 3:
                    cout << "Enter the two numbers - " << endl;
                    cin >> num1 >> num2;
                    checkRange(num1, num2);
                    multiplicationFunc(num1, num2);
                    break;

                case 4:
                    checkRange(25, -5);
                    assert(divisionFunc(25, -5)== -5);
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

void checkRange(long long int num1, long long int num2)
{
    if ((num1 > 4294967295 || num1 < INT_MIN) || (num2 > 4294967295 || num2 < INT_MIN))
    {
        throw runtime_error("Math error: Input value out of range");
    }
}

void addFunc(long long int number_1, long long int number_2)
{
    if ((number_1 >= 4294967295 && number_2 > 0) || (number_2 >= 4294967295 && number_1 > 0))
    {
        unsigned int addition = 0;
        if ((addition = number_1 + number_2) >= 4294967295)
        {
            throw runtime_error("Math error: Out of range");
        }
        else
        {
            addition = number_1 + number_2;
            cout << "\nsum : " << addition;
        }
    }
    else
    {
        cout << "\nAddition: " << number_1 + number_2;
    }
}

void substractFunc(long long int number_1, long long int number_2)
{
    signed int diff;
    if ((number_2 > 0 && number_1 < -2147483648 + number_2) || (number_2 < 0 && number_1 < -2147483648 + number_2))
    {
        throw runtime_error("Math error: Out of range");
    }
    else
    {
        diff = number_1 - (number_2);
    }
    cout << endl
         << "substraction : " << number_1 - (number_2);
}

void multiplicationFunc(long long int number_1, long long int number_2)
{
    long long int mult = number_1 * number_2;
    if ((mult > 4294967295) || (mult < -2147483648))
    {
        throw runtime_error("Math error: Out of range");
    }
    else
    {
        cout << "\nMultiplication : " << mult;
    }
}

int divisionFunc(long long int number_1, long long int number_2)
{
    if (number_2 == 0 || ((number_1 == INT_MIN) && (number_2 == -1)))
    {
        throw runtime_error("Math error: Out of range");
        return 0;
    }
    else
    {
        cout << "\nDivision is :- " << number_1 / number_2 << endl;
        return number_1 / number_2;
    }
}
