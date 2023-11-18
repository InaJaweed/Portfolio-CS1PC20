Report Week4

1. $ cd portfolio
Expectations - Changes the directory to portfolio
Results- Changes the directory to portfolio

2. $ git switch master
Expectations - Switches to master branch
Results - Switches to master branch

3. $ mkdir -p week4/framework
Expectations - Creates a week4 folder and then folder inside that named framework
Results- Creates a week4 folder and then folder inside that named framework

4. $ cd week4/framework
Expectations - Changes directory into week4/framework folder
Results - Enters the newly created directory called framework

5. $ git branch framework
Expectation Creates new branch called framework where new files can be created and stored off from the masters branch
Results - Creates a new branch from the master branch called framework

6. $ git switch framework
Expectation - Switches to framework branch
Expectation - Switches to framework branch

7. $ nano Makefile
Expectation - Creates a Makefile with the following contents
Results - Creates a Makefile 

8. $ cat -vTE Makefile used to check the preview of the Makefile
Results - Shows Tabs and End-ofline and shouls show that "<tab>" is shown as ^I instead actaul tab 

9. $ make feature NAME=test_output substitutes “test_output” 
Results- Created "NAME" feature to store test_output

10. $ ls -al test_output
Results - Displays all files in that directory

11. $ git add Makefile
Results - Adds the Makefile for the next commit 

12. $ git commit -m "Setting up Makefile to create feature folders"
Results - Commits all the changes in the directory

13. $ git push
expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

14. $ cd test_output; cd src
Results - Goes into the src folder 

15. $ nano test_outputs.c
Expectation - Create a .c file to write c program
Results - Creates a .c file 

16. $ gcc -Wall -pedantic test_outputs.c -o test_outputs
Expectation - Compiles and checks for error
Results - Compiles the file

17. $ ./test_outputs file_does_not_exist
Expectation - Gives an error as files does not exist and can not be found
Results - Gives error

18. $ ./test_outputs
Results - Gives error

19. $ nano op_test
Expectation - Creates a new file to test the code 
Results - Creates a new file to write a new code to test the output

20. $ ./test_outputs op_test
Results - Runs the code and prints out the line spacing for test_output to match it exactly for 108 lines

21. $ git add test_outputs.c
Results - Adds the test_output.c file to the next commit

22. $ git add op_test
Results - Adds it to the next commit

23. $ git commit -m "test framework and sample test suite" Saves any changes made with the following message
Results - Commits all the changes that has happend in the directory

24. $ git push
expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes
