#include <iostream>

using namespace std;

string echo_Command(string argv)
{
    string output_string = "";
    if (argv == "")
    {
        cout << endl;
        return "\n";
    }
    else if (argv == "Foo")
    {
        cout << argv << endl;
        return "\nFoo";
    }
    else
    {
        cout << argv << endl;
        return "\nFoo Command";
    }

    return argv;
}
