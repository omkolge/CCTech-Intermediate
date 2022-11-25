#include <iostream>
#include <vector>
#include <cassert>
#include"./ClosestZero.cpp"
using namespace std;

int main()
{
    vector<int> nums = {-4, -2, 0, 4, 8};
    assert(findClosestNum(nums)==0);

    nums={-1};
    assert(findClosestNum(nums)==-1);

    nums={15,81,52,33,11};
    assert(findClosestNum(nums)==11);
    assert(findClosestNum(nums)==1);
    return 0;
}