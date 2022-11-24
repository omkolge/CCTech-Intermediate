#include <iostream>
#include <cassert>
#include ".\Anagram.cpp"
using namespace std;

int main()
{
	string word = "biro";
	int len = word.size();
	assert(!anagramFunc(word, 0, len - 1));
	assert(anagramFunc(word, 0, len - 1));

	return 0;
}