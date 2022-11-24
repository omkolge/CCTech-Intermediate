#include <iostream>
#include <algorithm>
using namespace std;

int anagramFunc(string &word, int left, int right)
{

    if (left == right)
        cout << word << endl;
    else
    {

        for (int i = left; i <= right; i++)
        {
            swap(word[left], word[i]);

            anagramFunc(word, left + 1, right);

            swap(word[left], word[i]);
        }
    }
    return 0;
}