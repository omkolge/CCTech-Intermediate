#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string removeFilePath(const string& file_path)
{
    size_t pos = file_path.find_last_of("/\\");
    return file_path.substr(pos + 1);
}

string removeFileExtension(const string& file_name)
{
    int pos = file_name.find_last_of('.');
    return file_name.substr(0, pos);
}

string removeSpecialChar(string file_name)
{
    char chars[] = { '_','-','.' };
    for (char ch : chars)
    {
        auto t = remove(file_name.begin(), file_name.end(), ch);
        file_name.erase(t, file_name.end());
    }
    return file_name;
}

string removeFileWord(string file_name)
{
    string checkWord[] = { "tests","test","Tests","Test","spec","Spec","steps","step" };
    for (string w : checkWord)
    {
        size_t pos = file_name.find(w, 0);
        if (pos != string::npos)
            file_name.erase(pos, w.length());
    }
    return file_name;
}

string getIndexFunc(const string& file_path, const string& file_name)
{
    int indexArray[2];
    size_t pos = file_path.find(file_name, 0);
    indexArray[0] = pos;
    indexArray[1] = pos + file_name.length();
    return "["+to_string(indexArray[0]) + ", " + to_string(indexArray[1])+"]";
}

string  filePathFunction(string file_path)
{
    string str = removeFileWord(removeSpecialChar(removeFileExtension(removeFilePath(file_path))));
    cout << file_path << "->" << str << "\n" << endl;
    return getIndexFunc(file_path, str);
}

void testCases() // asserts for test cases
{
    assert( filePathFunction("Diamond_Spec.feature") == "[0, 7]");
    assert( filePathFunction("src/Hiker_spec.re") == "[4, 9]");
    assert( filePathFunction("test/hiker_test.exs") == "[5, 10]");
    assert( filePathFunction("wibble/test/hiker_spec.rb") == "[12, 17]");
    assert( filePathFunction("hiker_steps.rb") == "[0, 5]");
    assert( filePathFunction("hiker_spec.rb") == "[0, 5]");
    assert( filePathFunction("test_hiker.rb") == "[5, 10]");
    assert( filePathFunction("test_hiker.py") == "[5, 10]");
    assert( filePathFunction("test_hiker.sh") == "[5, 10]");
    assert( filePathFunction("tests_hiker.sh") == "[6, 11]");
    assert( filePathFunction("test_hiker.coffee") == "[5, 10]");
    assert( filePathFunction("hiker_spec.coffee") == "[0, 5]");
    assert( filePathFunction("hikerTest.chpl") == "[0, 5]");
    assert( filePathFunction("hiker.tests.c") == "[0, 5]");
    assert( filePathFunction("hiker_tests.c") == "[0, 5]");
    assert( filePathFunction("hiker_test.c") == "[0, 5]");
    assert( filePathFunction("hiker_Test.c") == "[0, 5]");
    assert( filePathFunction("HikerTests.cpp") == "[0, 5]");
    assert( filePathFunction("hikerTests.cpp") == "[0, 5]");
    assert( filePathFunction("HikerTest.cs") == "[0, 5]");
    assert( filePathFunction("HikerTest.java") == "[0, 5]");
    assert( filePathFunction("DiamondTest.kt") == "[0, 7]");
    assert( filePathFunction("HikerTest.php") == "[0, 5]");
    assert( filePathFunction("hikerTest.js") == "[0, 5]");
    assert( filePathFunction("hiker-test.js") == "[0, 5]");
    assert( filePathFunction("hiker-spec.js") == "[0, 5]");
    assert( filePathFunction("hiker.test.js") == "[0, 5]");
    assert( filePathFunction("hiker.tests.ts") == "[0, 5]");
    assert( filePathFunction("hiker_tests.erl") == "[0, 5]");
    assert( filePathFunction("hiker_test.clj") == "[0, 5]");
    assert( filePathFunction("fizzBuzz_test.d") == "[0, 8]");
    assert( filePathFunction("hiker_test.go") == "[0, 5]");
    assert( filePathFunction("hiker.tests.R") == "[0, 5]");
    assert( filePathFunction("hikertests.swift") == "[0, 5]");
    assert( filePathFunction("HikerSpec.groovy") == "[0, 5]");
    assert( filePathFunction("hikerSpec.feature") == "[0, 5]");
    assert( filePathFunction("hiker.feature") == "[0, 5]");
    assert( filePathFunction("hiker.fun") == "[0, 5]");
    assert( filePathFunction("hiker.t") == "[0, 5]");
    assert( filePathFunction("hiker.plt") == "[0, 5]");
    assert( filePathFunction("hiker") == "[0, 5]");
}