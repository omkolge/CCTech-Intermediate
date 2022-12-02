Test strategy     

1. Tail is the UNIX command implement it in C++.
2. Tail command returns the last 10 strings in the file (by default).
 
Test cases       
 
1. If we run Tail command without argument it returns new line.

2. If we run Tail command with single argument it returns the last 10 lines in the file if file contained more then 10 lines.
   But if file contained less then 10 lines then it will return all the lines present in the file.
   If file is not present then it will give an error message 
   Tail: cannot read:  File_name : No such file or directory.
   
3. If we run Tail command with multiple argument then it will return last 10 lines in both files
   But if files contained less then 10 lines it will return all the lines in the file if file is present in the directory.
   
4. If file is not present at that time give an error message.
   Tail: cannot read:  File_name : No such file or directory 