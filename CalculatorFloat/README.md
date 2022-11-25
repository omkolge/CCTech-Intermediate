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
4294967295
2356.2123

Output : Addition: 4294969651.212

2.If you choose operation 2 then enter 
25631599642
152663248326
Output : Exception occurred
		 Math error: Out of range

3.If you choose operation 2 then enter 
32294967295.56
4294967295
Output : Subtraction : 28000000000.560

		
4.If you choose operation 3 then enter 		
4294967295
56
Output : Multiplication : 240518168520.000

5.If you choose operation 3 then enter
-4294967295
56
Output : Exception occurred
		 Math error: Input value out of range
		
6.If you choose operation 3 then enter
-562486
56
Output : Exception occurred
		 Math error: Input value out of range

		
7.If you choose operation 3 then enter
1256325
2
Output : Division is :- 628162.500
