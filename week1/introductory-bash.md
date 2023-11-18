Report Week1

1. $ mkdir -p $HOME/portfolio/week1 ; cd $HOME/portfolio/week1 
Expectation – Will create a folder named portfolio and week1 inside it 
Results – Creates the folder named portfolio and week1 inside it

2. $ cd ~ 
Expectation – Exits all the folders
Results – Exits all the folders 

3. $ rm -r portfolio 
Expectation – Removes the folder named portfolio and everything inside 
Results – Removes folder named portfolio and everything inside  

4. $ mkdir -p $HOME/portfolio/week1 & cd $HOME/portfolio/week1
Expectation – Creates the folder named portfolio and week1 inside it
Results - Creates the portfolio folder and goes into it but it tries to execute the command same time so it returns an error 

5. $ cd ~
Expectation - Exits all the folders
Results - Exits all the folders 

6. $ rm -r portfolio
Expectation – Removes the folder named portfolio and everything inside
Results – Removes the folder named portfolio and everything inside 

7. $ mkdir -p $HOME/portfolio/week1 && cd $HOME/portfolio/week1
Expectation – Crates the folder named portfolio and week1 inside it and enters the folders
Results - Creates the folder named portfolio and week1 and enters the folder

8. $ echo "Hello World" 
Expectation – Prints out Hello World
Results Prints out Hello World

9. $ echo Hello, World
Expectation – Prints out Hello, World but possible error can appear due to no ""
Results – Prints out Hello, World 

10. $ echo Hello, world; Foo bar 
Expectation – Prints out Hello, World; Foo bar
Results – Prints out Hello, World and then returns an error saying Foo bar is not a command the ; means that the command stops there and it’s a new command after. 

11. $ echo Hello, world!
Expectation – Prints hello, World!
Results – Prints Hello, World!

12. $ echo "line one";echo "line two"
Expectation – Prints out line one and breaks the command because of the ; and then creates new line to print out line two
Results - Prints out line one and breaks the command and creates new line to print out line two

13. $ echo "Hello, world > readme" 
Expectation – Prints out “Hello, world >readme”
Results – Prints out “Hello, world >readme”

14. $ echo "Hello, world" > readme
Expectation – Prints out “Hello, world” and returns error
Results – Made a folder in week1 named readme 

15. $ cat readme 
Expectation – Reads what is inside the file
Results – Reads what is inside the file 

16. $ example="Hello, World"
Results – Creates variable named example and stores hello, world 

17. $ echo $example 
Expectation – Prints out Hello, World
Results – Prints out Hello, World 

18. $ echo ’$example’ 
Expectation – Prints out Hello, World
Results – Prints out $example

19. $ echo "$example" 
Expectation – Prints out $example
Results – Prints out Hello, World

20. $ echo "Please enter your name."; read example
Results - Stores an input from the user in example

21. $ echo "Hello $example"
Results - Hello (Input)

22. $ three=1+1+1;echo $three
Results - Prints out 1+1+1 as it is storede in the variable three

23. $ bc 

24. $ echo 1+1+1 | bc 

25. $ let three=1+1+1;echo $three 
Results - Can be used to calculate without using bc

26. $ echo date
Results - Prints out date

27. $ cal
Results - Shows the callander

28. $ which cal
Results - Asks the user which callander to read from

29. $ /bin/cal
Results - Reads the callender from a different directory 

30. $ $(which cal)
Results - Uses what ever inside the brackets and runs it

31. $ ‘which cal‘
Results - error

32. $ echo "The date is $(date)"
Results - Prints out a string and the the date at the end of it

33. $ seq 0 9
Results - Writes all the numbers from 0 - 9

34. $ seq 0 9 | wc -l 
Results - Counts how many lines are outputted 

35. $ seq 0 9 > sequence
Results - Stores the 0 - 9 in sequence file

36. $ wc -l < sequence 
Results - Shows the length of the data insidebthe file sequence

37. $ for I in $(seq 1 9) ; do echo $I ; done
Results - Creates a loop for how many values in sequence 1 - 9 print l

38. $ (echo -n 0 ; for I in $(seq 1 9) ; do echo -n +$I ; done ; echo) | bc  

39. $ echo -e ‘#include \nint main(void) \n{\n printf(“Hello World\\n”);\n return 0;\n}’ > hello.c 
 Results - Stores the command for hello world in hello.c file

40. $ cat hello.c 
Results - Reads the file

41. $ gcc hello.c -o hello
Results - Compiles the file

42. $ ./hello
Results - Runs the file
