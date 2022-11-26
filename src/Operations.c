#include <stdlib.h>



#include <stdio.h>

void* add (void* in) {
    double* proc = (double*)in;
    double* ret = malloc(sizeof(double));
    *ret = proc[0] + proc[1];
    return ret;
}

void* multiply (void* in) {
    double* proc = (double*)in;
    double* ret = malloc(sizeof(double));
    *ret = proc[0] * proc[1];
    return ret;
}

void* divide (void* in) {
    double* proc = (double*)in;
    double* ret = malloc(sizeof(double));
    *ret = proc[0] / proc[1];
    return ret;
}

void* subtract (void* in) {
    double* proc = (double*)in;
    double* ret = malloc(sizeof(double));
    *ret = proc[0] - proc[1];
    return ;
}

void* printString (void* in) {
    printf(in);
    return NULL;
}