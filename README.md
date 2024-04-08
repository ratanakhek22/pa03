
# PA 3 | CS 450

Ratana Khek - Ax

Thomas Wagner - A20482741

## Part 1:

There is only 1 file that is called memoryLeak.c

I used ubuntu on a windows computer, but the instructions should be based on linux OS.

### Test Cases Setup:   
1. Open a directory with only the memoryLeak.c file in it.
2. Compile the file (I used gcc, but other compilers might work I didn't test it).    gcc memoryLeak.c -o memLeakTest
3. Use valgrind and test the cases you want to. There are 10 to choose from (refer to the deliverable under testcases for the examples)   
valgrind --leak-check=yes ./memLeakTest [t]   
The t value can be 1 to 10 refering to the test case number.

## Part 2:

Please use the attached folder xv6-riscv.

### Test Cases Setup:
1. Standard setup for building xv6-riscv (Newlib toolchain + qemu)
2. cd xv6-riscv
3. make clean
4. make qemu
5. Once you are in the QEMU terminal, you can run the compiled test programs.
6. test_myv2p [va] - Runs test code found in test_myv2p.c for any integer virtual address.
7. test_mypages [t] - Runs test code found in test_mypages.c. Choose which [t] test case to run 1-5.
