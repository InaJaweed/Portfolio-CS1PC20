Week3 Report

1. $ cd ~
Expectation - Exits all the folders
Results - Exits all the folders

2. $ cd portfolio
Expectation - Changes the directory to portfolio folders
Results - Changes the directory to portfolio folders

3. $ mkdir week3
Expectation - Creates a folder named week3 in portfolio
Results -  Creates a folder named week3 in portfolio

4. $ mkdir week3/greeting
Expectation - Creates a greeting folder inside week3 folder
Results - Creates a greeting folder inside week3 folder

5. $ cd week3/greeting
Expectation - Enters week3/greeting directory
Results - Enters week3/greeting directory

6. $ git branch greeting
Expectation - Creates new branch called greetings where new files can be created and stored off from the masters branch
Results - Creates a new branch from the master branch called greeting

7. $ git switch greeting
Expectaion - Switches over to the newly created branch called greeting
Results - Switches to greeting branch

8. Create a file called greeting.c with the following contents:
Create a nano fille called greeting.c and write a simple hellow world code in c which will print "Hello world!" when it has been executed.

9. $ gcc -Wall -pedantic -c greeting.c -o greeting.o
I am not to sure what this line actually means but it is something to do with compiling the greeting.c file and checking for any bugs and printing out the "Hello world!"

10. Create a file called test_result.c with the following contents:
Create a nano file called test_result.c which will include the greeting.h file which will be created after wards in a new nano file to check if the code returns 0

11. And create a file called greeting.h with the following contents:
Create a nano file called greeting.h which will have void command value stored which will be used for test_result.c file to return the value

12. $ echo greeting.o >> ~/portfolio/.gitignore
Expectaion - Moves the greeting.o into different location - portfolio folder and then moves it into .gitignore file
Results - Moves the greeting.o into portfolio/.gitignore file

13. $ echo libgreet.a >> ~/portfolio/.gitignore
Expectaion - Moves the greeting.o into different location - portfolio folder and then moves it into .gitignore file
Results - Moves the greeting.o into portfolio/.gitignore file

14. $ ar rv libgreet.a greeting.o
Results - Archives the libgreet.o file into libgreet.a file

15. $ gcc test_result.c -o test1 -L. -lgreet -I.
Expectation - Compiles test_result.c 
Results - Compiles the files

16. $ ./test1
Expectaion - Run the file 
Results - Runs the file

17. $ git add -A
Expectaion -  Adds all updated files into the directory
Results - Updates to the main library with all the changes that has happened

18. $ git commit -m “greeting library and greeting test program”
Expectaions - Saves/Commits the files changes with the message of what is being saved
Results - Updates the directory with all the changes

19. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab 
Results - Stores and updates csgitlabe with all the changes

20. $ cd ~/portfolio/week3
Expectaion - Changes the directory to week3
Results - Changes the directory to week3

21. $ git switch master
Expectaion - Switches back to the master branch
Results - Switches back to the master branch

22. $ git branch vectors
Expectation - Creates new branch called vectors where new files can be created and stored off from the masters branch
Results - Creates a new branch from the master branch called vectors

23. $ git switch vectors
Expectaion - Switches over to the newly created branch called vectors
Results - Switches to greeting vectors

24. $ mkdir vectors
Expectaion - Makes a new folder called vectors
Results - Makes a new folder called vectors

25. $ cd vectors
Expectaion - Changes the directory to vectors folder
Results - Changes the directory to vectors folder

26. Create a file called vector.h with the following contents:
Create a new nano file called vector.h and defines SIZ with three different variables x,y and z with int

27. Create a file called test_vector_add.c with the following contents:
Creates a new nano file called test_vector_add.c which will have all the inputs for the different variables x,y and z

28. And now create the code to actually “do the math” – vector.c
Creates a new nano file called vector.c and will contain the code to see if they are the right size and that they have been declared

29. $ gcc -Wall -pedantic -c vector.c -o vector.o
Results - Compiles the files 

30. $ ar rv libvector.a vector.o 
Results - Archives the libvector.o file into vector.a file

31. $ gcc test_vector_add.c -o test_vector_add1 -L. -lvector -I.
compiles teh test_vector_add.c and test_vector_add1 

32. $ ./test_vector_add1
Expectaion - Run the file 
Results - Runs the file

33. $ git add -A
Expectaion -  Adds all updated files into the directory
Results - Updates to the main library with all the changes that has happened

34. $ git commit -m “code to add two vectors of fixed size”
Expectaions - Saves/Commits the files changes with the message of what is being saved
Results - Updates the directory with all the changes

35. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab 
Results - Stores and updates csgitlabe with all the changes

36. Edit vector.h so it contains this:
Edits the vector.h file and add new variables for x and y that are also int

37. Edit vector.c so it contains this:
Edit the vector.c file to add the new declared variables x and y for dot_product and to see if they have been declared

38. And create test_vector_dot_product.c so it contains:
Create a nano filed called test_vector_dot_product.c containing that code which will be a test framework for vector library and cheks each elememnts of the return vector

39. $ gcc -Wall -pedantic -c vector.c -o vector.o
Results - Compiles the files

40. $ ar rv libvector.a vector.o
Results - Archives the libvector.a file into vector.o file

41. $ gcc test_vector_dot_product.c -o test_vector_dot_product1 -L. -lvector -I.
Results - Compiles the files

42. $ ./test_vector_dot_product1
Expectaion - Run the file
Results - Run the file

43. $ git add -A
Expectaion -  Adds all updated files into the directory
Results - Updates to the main library with all the changes that has happened

44. $ git commit -m “code to calculate dot product of two vectors of fixed
size”
Expectaions - Saves/Commits the files changes with the message of what is being saved
Results - Updates the directory with all the changes

45. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab 
Results - Stores and updates csgitlabe with all the changes
