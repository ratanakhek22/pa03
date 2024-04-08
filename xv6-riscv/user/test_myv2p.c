#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <virtual address>\n", argv[0]);
        exit(1);
    }

    int va = atoi(argv[1]);
    myv2p(va);
    exit(0);
}