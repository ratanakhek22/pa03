#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    myv2p(0);
    myv2p(4096);
    myv2p(12288);
    myv2p(23482);
    exit(0);
}