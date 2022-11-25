User give the Input as two number, choice the operations


Test Strategy 
1. Created the checkRange function for check range
2. Also created the Addition, Subtraction, Multiplication and Division functions for signed and unsigned
Developed this code for calculating Floating value. 
Flow:
User Enter the which operation want to done 
and then enter the two values

Test Cases 

1.If you choose operation 1 then enter 
2147483648
2147483648
Output: Failed Overflow!
		Because Addition is overflow addition

2.If you choose operation 1 then enter 
4294967295
2
Output: Exception occurred
		*Overflow:Addition out of range

3.If you choose operation 1 then enter 
4294967295
-2147483648

Output: Addition : 2147483647
		
4.If you choose operation 2 then enter 		
2147483648
-2147483647
Output: Subtraction : 4294967295

5.If you choose operation 2 then enter
-1
2147483648
Output:	Exception occurred
		Subtraction out of range
		
6.If you choose operation 3 then enter
4294967295
-2	
Output: Exception occurred
		Multiplication out of range
		
7.If you choose operation 3 then enter
46253
65
Output: Multiplication : 3006445

8.7.If you choose operation 4 then enter
25
-5
Output: Division : -5
