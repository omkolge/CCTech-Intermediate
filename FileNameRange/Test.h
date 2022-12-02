#pragma once
#include<string.h>

using namespace std;

string removeFilePath(const string& file_path);

string removeFileExtension(const string& file_name);

string removeSpecialChar(string file_name);

string removeFileWord(string file_name);

string getIndexFunc(const string& file_path, const string& file_name);

string filePathFunction(string file_path);

void testCases();