#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "\n";
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            cout << "==> " << argv[1] << " <==" << endl;
            string cmd;
            vector<string> cmdV;
            int count = 0;

            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "Tail: cannot read: " << argv[i] << " : No such file or directory ";
            }
            else
            {
                while (getline(infile, cmd))
                {
                    cmdV.push_back(cmd);
                }
            }
            if (cmdV.size() > 10)
            {
                 
                int count = cmdV.size() - 10;
                for (int i = count  ; i <= cmdV.size(); i++)
                {
                    cout << cmdV.at(i) << endl;
                }
            }
            else
            {
                for (int i = 0; i < cmdV.size(); i++)
                {
                    cout << cmdV.at(i) << endl;
                }
            }
        }
    }
}