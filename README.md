
# PA 3 | CS 450 | Part 1 Test Cases

This is the Test Cases README deliverable for PA3.

There is only 1 file that is called memoryLeak.c

I used ubuntu on a windows computer, but the instructions should be based on linux OS.

### Test Cases Setup:   
1. Open a directory with only the memoryLeak.c file in it.
2. Compile the file (I used gcc, but other compilers might work I didn't test it).    gcc memoryLeak.c -o memLeakTest
3. Use valgrind and test the cases you want to. There are 10 to choose from (refer to the deliverable under testcases for the examples)   
valgrind --leak-check=yes ./memLeakTest [t]   
The t value can be 1 to 10 refering to the test case number.