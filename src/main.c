#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>

#include "Operations.h"
#include "Job.h"
#include "const.h"


int main () {
    double cpy[] = {1, 1};
    char* str = "Hello world!\n";

    Job* j = createJob(str, &printString);

    executeJob(j);

    //printf("%f", *(double*)(j->ret));
    //printf("\n");
}