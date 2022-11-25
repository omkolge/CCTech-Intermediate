#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double squartRootFunc(double number);

int main()
{
    try
    {
        string str;
        cout << "Enter the number : ";
        cin >> str;
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] > 47 && str[i] < 58) || str[i] == '.' || str[i] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            double num = std::stod(str);
            cout << " Square root of " << num << " is : " << squartRootFunc(num);
        }
        else
        {
            throw runtime_error("Only Number is allowed");
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

double squartRootFunc(double number)
{
    double result;
    if (number == 0)
    {
        throw runtime_error("Zero Has not a Square Root ");
    }
    else if (number < 0)
    {
        throw runtime_error("Cannot Find The Square Root of Negative Number.");
    }
    else
    {

        result = sqrt(number);
    }
    return result;
}