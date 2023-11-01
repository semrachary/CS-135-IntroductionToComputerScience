# ProgrammingAssignment5

## Project Goals
The goal of this project is to:
1.	Familiarize students with **passing** variables **by address**
2.	Provide students with continued practice creating **functions**
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```stats.c```

## Program
Something witty here!  

Let's practice getting statistics on different sets of values.

## Requirements
### The following 12 functions are REQUIRED

*getInts()*  
**Input Parameters**: a way to store multiple whole numbers, the amount of whole numbers to be stored  
**Returned Output**: nothing  
**Functionality**: This function should get all of the whole numbers from the user, prompting them each time.  

*getDoubles()*  
**Input Parameters**: a way to store multiple decimal numbers, the amount of decimal numbers to be stored  
**Returned Output**: nothing  
**Functionality**: This function should get all of the decimal numbers from the user, prompting them each time.  

*getChars()*  
**Input Parameters**: a way to store multiple letters, the amount of letters to be stored  
**Returned Output**: nothing  
**Functionality**: This function should get all of the letters from the user, prompting them each time.  

*displayInts()*  
**Input Parameters**: the collection of whole numbers, the amount of whole numbers  
**Returned Output**: nothing  
**Functionality**: This function should display all of the whole numbers to the screen, on one line.  

*displayDoubles()*  
**Input Parameters**: the collection of decimal numbers, the amount of decimal numbers  
**Returned Output**: nothing  
**Functionality**: This function should display all of the decimal numbers to the screen, on one line. Only 2 decimal places should be displayed.  

*displayChars()*  
**Input Parameters**: the collection of letters, the amount of letters  
**Returned Output**: nothing  
**Functionality**: This function should display all of the letters to the screen, on one line.  

*calcIntStats()*  
**Input Parameters**: the collection of whole numbers, the amount of whole numbers, a way to store the minimum whole number outside of the function, a way to store the maximum whole number outside of the function  
**Returned Output**: the average of all of the whole numbers  
**Functionality**: This function should compute the average of all of the whole numbers, find the minimum whole number, and find the maximum whole number.  

*calcDoubleStats()*  
**Input Parameters**: the collection of decimal numbers, the amount of decimal numbers, a way to store the minimum decimal number outside of the function, a way to store the maximum decimal number outside of the function  
**Returned Output**: the average of all of the decimal numbers  
**Functionality**: This function should compute the average of all of the decimal numbers, find the minimum decimal number, and find the maximum decimal number.  

*calcCharStats()*  
**Input Parameters**: the collection of letters, the amount of letters, a way to store the minimum letter outside of the function, a way to store the maximum letter outside of the function  
**Returned Output**: nothing  
**Functionality**: This function should find the minimum letter and find the maximum letter.  

*displayIntStats()*  
**Input Parameters**: the collection of whole numbers, the amount of whole numbers, the minimum whole number, the maximum whole number, the average of all of the whole numbers  
**Returned Output**: nothing  
**Functionality**: This function should display all of the whole numbers to the screen, on one line. It should also display the minimum whole number, the maximum whole number, and the average of all of the whole numbers.  

*displayDoubleStats()*  
**Input Parameters**: the collection of decimal numbers, the amount of decimal numbers, the minimum decimal number, the maximum decimal number, the average of all of the decimal numbers  
**Returned Output**: nothing  
**Functionality**: This function should display all of the decimal numbers to the screen, on one line. It should also display the minimum decimal number, the maximum decimal number, and the average of all of the decimal numbers.  

*displayCharStats()*  
**Input Parameters**: the collection of letters, the amount of letters, the minimum letter, the maximum letter  
**Returned Output**: nothing  
**Functionality**: This function should display all of the letters to the screen, on one line. It should also display the minimum letter and the maximum letter.  

## Example Program Execution
### An example executable is provided in this repository.
- You should be able to run it from your project folder in a Linux environment. 
- If you encounter a “permission denied” error when attempting to run the executable, type  
```chmod u+x statsExecutable```  
into the terminal and try running the executable again.

## Submission details
To submit your project, you will have to use git from the command line in a Linux environment:
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
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
