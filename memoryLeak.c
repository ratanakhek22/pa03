
#include <stdlib.h>
#include <stdio.h>

struct myStruct {
    int* myList;
};

int test(int num){
    if(num == 1) {
        // malloc 8 byte and return
        char* string = malloc(8 * sizeof(char));
        return 0;
    } else if(num == 2) {
        // malloc 8 bytles and free it
        char* string = malloc(8 * sizeof(char));
        free(string);
        return 0;
    } else if(num == 3) {
        // malloc int pointer and return
        int* myNums = malloc(5 * sizeof(int));
        return 0;
    } else if(num == 4) {
        // malloc int pointer and free it
        int* myNums = malloc(5 * sizeof(int));
        free(myNums);
        return 0;
    } else if(num == 5) {
        // make a struct that contains a list and free only the struct
        struct myStruct* s = malloc(sizeof(s));
        s->myList = malloc(5 * sizeof(int));
        free(s);
        return 0;
    } else if(num == 6) {
        // make a struct that contains a list and free list first
        struct myStruct* s = malloc(sizeof(s));
        s->myList = malloc(5 * sizeof(int));
        free(s->myList);
        free(s);
        return 0;
    } else if(num == 7) {
        // make a struct that contains 3 sets of numbers and return
        struct myStruct* s = malloc(sizeof(s) * 3);
        for(int i = 0; i < 3; i++) {
            s->myList = malloc(5 * sizeof(int));
            for(int j = 0; j < 5; j++) {
                s->myList[j] = j * i;
            }
            s++;
        }
        return 0;
    } else if(num == 8) {
        // make a struct that contains 3 sets of numbers and free only the pointers
        struct myStruct* s = malloc(sizeof(s) * 3);
        for(int i = 0; i < 3; i++) {
            s->myList = malloc(5 * sizeof(int));
            for(int j = 0; j < 5; j++) {
                s->myList[j] = j * i;
            }
            s++;
        }
        s--;
        free(s);
        s--;
        free(s);
        s--;
        free(s);
        return 0;
    } else if(num == 9) {
        // make a struct that contains 3 sets of numbers and free only the lists
        struct myStruct* s = malloc(sizeof(s) * 3);
        for(int i = 0; i < 3; i++) {
            s->myList = malloc(5 * sizeof(int));
            for(int j = 0; j < 5; j++) {
                s->myList[j] = j * i;
            }
            s++;
        }
        s--;
        free(s->myList);
        s--;
        free(s->myList);
        s--;
        free(s->myList);
        return 0;
    } else if(num == 10) {
        // make a struct that contains 3 sets of numbers and free everything
        struct myStruct* s = malloc(sizeof(s) * 3);
        for(int i = 0; i < 3; i++) {
            s->myList = malloc(5 * sizeof(int));
            for(int j = 0; j < 5; j++) {
                s->myList[j] = j * i;
            }
            s++;
        }
        s--;
        free(s);
        free(s->myList);
        s--;
        free(s);
        free(s->myList);
        s--;
        free(s);
        free(s->myList);
        return 0;
    }
}

int main(int argc, char *argv[]) {

    if(argc > 2) {
        printf("Too many arguments supplied.\n");
        return -1;
    }
    if(argc < 2) {
        printf("One argument expected.\n");
        return -1;
    }

    printf("running Test Case %s!\n", argv[1]);
    
    test(atoi(argv[1]));

    return 0;
}
