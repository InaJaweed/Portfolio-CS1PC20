Week5 Report

1. $ cd portfolio
Expectations - Changes directory to portfolio
Results - Changes directory to portfolio

2. $ git switch master
Results - Switches to master branch

3. $ git merge greeting
Expectaion - Merges greeting into Master branch
Results - Megers greeting branch into Master 

4. $ git merge vectors
Expectaion - Merges vectors into Master branch
Results - Megers vectors branch into Master 

5. $ git merge framework
Expectaion - Merges framework into Master branch
Results - Megers framework branch into Master

6. $ git branch baseconversion
Expectation Creates new branch called baseconversion where new files can be created and stored off from the masters branch
Results - Creates a new branch from the master branch called baseconversion

7. $ git switch baseconversion
Results- Switches to baseconversion branch

8. $ mkdir week5 ; cd week5 
Expectaion - Creates a Week5 filder and enters the directory week5

9. $ make -f ../week4/framework/Makefile feature NAME=dec2bin 
Results - Creates multiple executables files one of them is the dec2bin

10. $ cd dec2bin
Results - Changes directory to dec2bin

11. $ gcc src/conv.c -o lib/conv.o -c 
Results - Compiles the file

12. $ ar rv lib/libconv.a lib/conv.o 
Results - Archives the folder

13. $ gcc src/dec2bin.c -o bin/dec2bin -Isrc -lconv -Llib 
Results - Compiles the file

14. $ ~/portfolio/week4/framework/test_output/src/test_outputs test/dec2bin_tests 
Results - Goes to the specific files directory and executes the test file that is stored there

15. $ cd ~
Results - Exits all the folders

16. $ git switch master  
Results - Switches to master branch

17. $ git merge baseconversion
Expectaion - Merges baseconversion into Master branch
Results - Megers baseconversion branch into Master

18. $ mkdir docs
Expectaion - Creates a docs folder
Results - Creates a docs folder

19. $ doxygen -g 
Expectatons - Creates the doxyfile
Results - Creates the doxyfile

20. $ git add Doxyfile
Expectaion -  Adds the Doxyfile files into the directory changes for next commit
Results - Updates to the main library with all the changes that has happened

23. $ git add submission_answers.md
Expectaion -  Adds submission_answers.md files into the directory changes for next commit
Results - Updates to the main library with all the changes that has happened

24. $ git add _FrontPage.md
Expectaion -  Adds _FrontPage.md files into the directory changes for next commit
Results - Updates to the main library with all the changes that has happened

25. $ git commit -m “added configured Doxyfile, answers and frontpage”
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

26. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

27. $ doxygen
Results - Creates a HTML and Latex folders

28. $ cd docs/latex
Results - Changes directory into latex folder

29. $ make
Results - Creates executables

30. $ git add refman.pdf
Expectaion -  Adds refman.pdf files into the directory changes for next commit
Results - Updates to the main library with all the changes that has happened

31. $ git commit -m “adding documentation”
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

32. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes
