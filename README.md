# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with **variables**
2.  Familiarize students with the **printf** and **scanf** functions.

### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and comments recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```birds.c```

## Program
Let's go birding!  

We’re going to build a program to help manage data collection for bird surveys.  
![image](https://github.com/CSE-UNR/cs135-pa1/assets/2504089/766ee73a-ed03-499b-ba26-6d3d2fe02db1)


**The Problem**  
Biologists use real alpha codes to track the type of bird, but we'll use the following: 
- G: goose
- D: duck
- B: blackbird
- M: magpie

In addition to the bird codes, we'll want to track how old they are and how much they weigh (in ounces). Let's collect this data for 4 birds, then display it in a table.  

### Requirements
For each bird, the user should enter all three values on one line, separated by spaces. For example (the highlighted part is what the program displays and the italicized part is the user input):  
```Bird 1 (age code weight): ``` *3 B 2.8*

Please refer to the following screenshot for an example of the table’s format. Use the formatting techniques learned for conversion specifiers and formatted IO. **Your program’s table should be in exactly the same format as the table in the provided program.**

### Example Program Execution:
***This is just one example of how the program should run. Your program should be able to handle any input that is entered in the correct format.***  

![birdsExecutable](https://github.com/CSE-UNR/cs135-pa1/assets/2504089/02d65a95-bc59-4dfc-bbc3-0dbdaccb53fb)

### Hints:
- The vertical line is called a pipe. It's on your keyboard, if you use the Shift + \ key (above the Enter key).
- The double lines are equals (=) and the single lines are dashes (-).
- Make sure you try out different test cases!
- Play close attention to using scanf with variables, especially blank spaces and endlines.
- Make sure you control the formatting of any floating-point output. 

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
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
