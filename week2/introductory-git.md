# # Report Week2

1. $ cd ~ change directory
Expectations- Exits all the folder
Results - Exits all the folder

2. $ git init portfolio 
Results - Creates a git repository called "portfolio"

3. $ cd portfolio 
Expectations - Changes directory to portfolio
Results - Changes directory to portfolio

4. $ ls -al 
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

5. $ git status 
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

6. $ echo hello > .gitignore – stores “hello” under file name “.gitignore”
Expectations - Prints hello and moves it into .gitignore file 
Results - Stores the word "hello" into .gitignore

7. $ git add -A 
Expectaion -  Adds all updated files into the directory
Results - Updates to the main library with all the changes that has happened

8. $ git status 
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

9. $ git config --global user.email “” 
Results - Allows the user to connect and link there email for commits to csgitlab

10. $ git config –global user.name “” 
Results - Allows the user to connect and link there username for commits to csgitlab 

11. $ git commit -m “first commit, adding week 1 content”
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

12. $ git status
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

13. $ git push 
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

14. $ git remote add origin https://csgitlab.reading.ac.uk//cs1pc20_portfolio.git
Results - Connects to the remote csgtitlab repository to allow pushing files to save them

15. $ git push –set-upstream origin master
Results - Pushesh all the recent chnages that have all been commited into csgitlab into a new branch that is created

16. $ git status
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

17. $ echo “# CS1PC20 Portfolio” > readme.md 
Expectaion - Print "# CS1PC20 Portfolio”
Results - Saves the "# CS1PC20 Portfolio” into a readme.md file

18. $ git add readme.md
Expectaion -  Adds the readme.md file for the next commit
Results - Updates the git and adds readme.md file for the commit

19. $ git commit -m “added readme file”
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

20. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

21. $ git config –global credential.helper cache
Results - Stores the username and password so we dont have to type it everytime

22. $ git branch week2 
Expectation Creates new branch called week2 where new files can be created and stored off from the masters branch
Results - Creates a new branch from the master branch called week2

23. $ git checkout week2
Results - Used to navigate between the branches created by the git and store all the new commits on that branch

24. $ mkdir week2
Expectation – Will create a folder named week2
Results – Creates the folder named week2

25. $ echo “# Week 2 exercise observations” > week2/report.md
Expectaion - Saves "# Week 2 exercise observations” into week2 folder and then into a report.md file
Results - Expectaion - Saves "# Week 2 exercise observations” into week2 folder and then into a report.md file

26. $ git status
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

27. $ git add week2 – adds week 2 to next commit
Expectaion -  Adds the week2 file for the next commit
Results - Updates the git and adds week2 file for the commit

28. $ git commit -m “added week 2 folder and report.md”
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

21. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

22. $ git checkout master
Results - Switches to master branch and saves all the new commits

23. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

24. $ git checkout week2
Results - Switches to week2 branch and saves all the new commits

25. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

26. $ git checkout master
Results - Switches to master branch and saves all the new commits

27. $ git merge week2
Expectaion - Merges week2 into Master branch
Results - Megers week2 branch into Master

28. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

29. $ git push
Expectaion - Pushesh all the recent chnages that have all been commited into csgitlab
Results - Stores and updates csgitlabe with all the changes

30. $ rm -r week2
Expectaion - Removes week2 directory
Results - Removes week2 directory

31. $ rm -r week1 
Expectaion - Removes week1 directory
Results - Removes week1 directory

32. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

33. $ git status
Expectations - Shows the current status of the directory
Results- Shows current status of the directory to show if any changes has been made

34. $ git stash
Expectaion - Saves stash file 
Results - Temporarily saves any of the uncommited changes 

35. $ git stash drop
Expectaion - Drops any saved changes temporarily
Results - Drops any temporarily saved changes

36. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

37. $ cd ~
Expectations- Exits all the folder
Results - Exits all the folder 

38. $ cp -r portfolio portfolio_backup – copies the portfolio file under the name “portfolio_backup”
Expectaion - Creates a new backup directory called portfolio_backup 
Results - Copies portfolio and creates portfolio_backup

39. $ rm -rf portfolio
Expectaion - Removes portfolio directory and everything stored in it
Results - Force removes portfolio directory

40. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory

41. $ git clone https://csgitlab.reading.ac.uk//cs1pc20_portfolio portfolio
Results - Clones all the data from csgitlab

42. $ ls -al
Expectations - Display all the files in the folder
Results - Displays all the files that are stored in the directory
