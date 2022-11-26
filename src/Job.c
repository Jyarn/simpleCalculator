#include "Operations.h"
#include "Job.h"
#include "const.h"

Job* createJob(void* args, operation ops) {
    Job* j = malloc(sizeof(Job));
    j->args = args;
    j->complete = false;
    j->job = ops;
    return j;
}

void executeJob (Job* this) {
    this->ret = (*this->job)(this->args);
    this->complete = 1;
}
