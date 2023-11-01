# ProgrammingAssignment2

## Project Goals
The goal of this project is to:
1.	Familiarize students with **selection**.
2.	Familiarize students with **expressions**.
3.  Provide students with continued practice with **variables**.
4.  Provide students with continued practice with **formatted IO**.

### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```freezeria.c```

## Program
![erins_freezeria](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/f0488b64-b549-4505-9f39-cf808ab3d984)
Let's build a game to test our ability to remember ice cream sundae orders.  

**The program should behave as follows:**  
The program should display a customer's order to the player. When the player is ready, the screen should clear and the player should be asked about the customer's order. After they enter it, the player's score is displayed.

### Requirements
For this version of our game, the customer's order should always be the same:
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/b8ea0715-3838-4f32-818f-b05f9aae8fc1)
When the player types 'Y' for YES, the screen should clear (we went over how to do this in class).  

The scoring is outlined in the following table:  
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/285a66dc-ffd3-4e75-9ed5-eef6c98c95b4)

The valid entry is outlined in the following table:  
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/82dd6f6c-ef46-45f2-8154-ff02a7f4f755)


After the player "makes" the order, they should get their score and some feedback, as shown below.  
### Example Program Execution:
***These are just a few example of how the program should run. Your program should be able to handle any input that is entered in the correct format.***  
When the player gets the order right:  
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/26368113-0cd9-47a3-a5ee-4439c6a3d862)  
When the player gets it mostly right:  
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/a6e5fb94-2da0-4150-82e1-90f604c5a23c)  
When the player gets it all wrong:  
![image](https://github.com/CSE-UNR/cs135-pa2/assets/2504089/a9cc42be-e2a0-4d6b-a391-b0596e044e2f)  

### Hints:
- Use ```system("clear");``` to clear the screen in the Linux terminal.  
- The ```system("clear");``` function requires the ```stdlib.h``` to be included.  

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
