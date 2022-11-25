Use the assert function and check the following test cases

Test Strategy 
1. Created the integer vector nums.
2. Created the closestNum function.
3. In the assert function call the ClosestNum function
Developed this code for calculating Simple Interest. 
Flow:
Class contain integer vector nums and assert function.

Test Cases 

1.Vector {-4, -2, 0, 4, 8}
assert(findClosestNum(nums)==0);
Output: Assertion passed

2.Vector {-1} 
assert(findClosestNum(nums)==-1);
Output: Assertion passed 

2.Vector {} 
assert(findClosestNum(nums)==0);
Output: Assertion passed 

3.Vector {15,81,52,33,11};
assert(findClosestNum(nums)==33);
Output: Assertion failed
		
4.assert(findClosestNum(nums)==1);
Output: Assertion failed