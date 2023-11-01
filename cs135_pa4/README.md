# ProgrammingAssignment4

## Project Goals
The goal of this project is to:
1.	Familiarize students with the use of **strings**
2.	Familiarize students with **functions**
3.  Provide students with continued practice with **expressions**, **selection** and **loops**
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: **DO NOT** change the existing ```strings.c``` filename.

## Program
You may not use the string library in this class, so let's build our own!  

### Requirements
**DO NOT** change the main function or the function prototypes. Your task is simply to edit the existing ```strings.c``` file to *add the correct code to the existing function definitions*.  
#### The functions:

*stringLength()*  
**Input Parameters**: a string  
**Returned Output**: the length of a given string  
**Functionality**: This function should count the useful characters in a string  

*stringCopy()*  
**Input Parameters**: two strings  
**Returned Output**: nothing  
**Functionality**: This function should copy the source (first) string into the destination (second) string so that they're both the same after the function is done.  

*stringSwap()*  
**Input Parameters**: two strings  
**Returned Output**: nothing  
**Functionality**: This function should copy each string into the other string so that they "swap places".  

*stringCompare()*  
**Input Parameters**: two strings  
**Returned Output**: whether the strings are the same  
**Functionality**: This function should compare the characters in the strings and indicate whether the strings are the same according to the rules below:  
- 0	means the strings are the same.  
- A value <0	means that either the value of the first character that does not match is lower in the compared string, or all compared characters match but the compared (second) string is shorter.  
- A value \>0	means that either the value of the first character that does not match is greater in the compared string, or all compared characters match but the compared string is longer.

## Example Program Execution
The ```strings.c``` file already contains a complete program which you should compile and run before you start working on the functions.  

## Submission details
To submit your project, you will have to use git on your Linux environment:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic dishonesty according to the code of this university. Academic dishonesty will not be tolerated and penalties can include cancelling a student’s enrollment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
