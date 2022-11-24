User give the Input Principle,rate and year


Test Strategy 
1. Created the calculateSI function
2. Also use the abs function if user gives negative input
Developed this code for calculating Simple Interest. 
Flow:
Class contain private data members and public member function.
Created the instance of class in main.
User can give the input
Call that member function calculateSimpleInterest()

Test Cases 

1.If enter principal, rate and year as zero then it simply print the actual principle. 
Output: Rate : 0
		Year : 0
		Principal : 0
		Interest : 0
		Total Value : 0

2.If enter all values greater than zero then it will print principle amount, year, rate, as well as Simple Interest. 
Output: Rate : 2.5
		Year : 2.5
		Principal : 10000
		Interest : 625
		Total Value : 10625

3.If enter principle amount greater than 0 and rate or year zero then
Output: Rate : 3.5
		Year : 0
		Principal : 20000
		Interest : 0
		Total Value : 20000
		
4.If enter principle amount is negative and rate or year is 2.5 then return positive Total value because use the absolute function
Output: Rate : 2.5
		Year : 2.5
		Principal : 10000
		Interest : 625
		Total Value : 10625