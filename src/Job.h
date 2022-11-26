#ifndef H__JOB
#define H__JOB

#include "Operations.h"

typedef struct job {
    void* args;
    operation job;
    void* ret;
    char complete;
} Job;

void executeJob (Job* this);
Job* createJob (void* args, operation ops);

#endif