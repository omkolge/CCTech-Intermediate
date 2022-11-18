#include <iostream>
#include <vector>
#include <cassert>
#include"./ClosestZero.cpp"
using namespace std;

int main()
{
    vector<int> nums = {-4, -2, 0, 4, 8};
    assert(findClosestNum(nums)==0);
    return 0;
}