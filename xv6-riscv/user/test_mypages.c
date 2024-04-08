#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void test_case_1() {
    mypages();
}

void test_case_2() {
    int num = 10;
    mypages();
    printf("%d\n", num);
}

void test_case_3() {
    char *str = "Hello";
    mypages();
    printf("%s\n", str);
}

void test_case_4() {
    int *data = malloc(1024);
    free(data);
    mypages();
}

void test_case_5() {
    int *data = malloc(1024);
    mypages();
    free(data);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <test_case_number>\n", argv[0]);
        exit(1);
    }

    int test_case = atoi(argv[1]);
    switch (test_case) {
        case 1:
            test_case_1();
            break;
        case 2:
            test_case_2();
            break;
        case 3:
            test_case_3();
            break;
        case 4:
            test_case_4();
            break;
        case 5:
            test_case_5();
            break;
        default:
            printf("Invalid test case number: %d\n", test_case);
            exit(1);
    }

    exit(0);
}
