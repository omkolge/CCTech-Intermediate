Test Strategy

1. Sort is a UNIX command which we implement in c++.
2. It sort the text inside the file  as line by line.
3. Lines starting with a number will appear before lines starting with a letter.
4. Lines starting with a uppercase letter will appear before lines starting with the same letter in lowercase.

Test cases 

1. If we execute sort command without passing any argument then it will give a new line.
2. If we execute sort command with single argument it will sort that single file if that file is present if not present then it will give an error message.
	sort: cannot read: File_name : No such file or directory
3. If we execute sort command with multiple argument and all those files are present in the directory then it will sort those files simultaneously.
4. if we execute sort command with multiple argument and some files are nor present and some files are preset in the given directory at that time also it will give an error message.
	sort: cannot read: File_name : No such file or directory
