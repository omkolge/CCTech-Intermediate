#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char c;
    if (argc == 1)
    {
        cout << "\n";
    }
    else if (argc > 1)
    {
        string cmd;
        vector<string> cmdV;
        int count = 0;
        for (int i = 1; i < argc; i++)
        {
            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "sort: cannot read: " << argv[i] << " : No such file or directory ";
                count++;
                break;
            }
            else
            {
                while (getline(infile, cmd))
                {
                    cmdV.push_back(cmd);
                }
            }
        }
            if (count == 0)
            {
                sort(cmdV.begin(), cmdV.end());
                for (int i = 0; i < cmdV.size(); i++)
                    cout << cmdV.at(i) << endl;
            }
        
    }
}