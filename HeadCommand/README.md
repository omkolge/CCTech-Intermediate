Test Strategy        

1. Head command is UNIX command which we want to implement in C++.
2. Head command returns first 10 lines by default.

Test cases  

1. If we run Head command without argument it returns new line.

2. If we run Head command with single argument it returns the first 10 lines in the file if file contained more then 10 lines.
	But if file contained less then 10 lines then it will return all the lines present in the file.
	If file is present, if not then it will give an error message :
	Head: cannot read:  File_name : No such file or directory.

3. If we run Head command with multiple argument then it will return first 10 lines in both files
	But if files contained less then 10 lines it will return all the lines in the file if file is present in the directory.
   
4. If file is not present then it will give an error message.
	Head: cannot read:  File_name : No such file or directory 