#ifndef H__OPERATIONS
#define H__OPERATIONS

void* add (void* in);
void* subtract (void* in);
void* multiply (void* in);
void* divide (void* in);
void* printString (void* in);

typedef void* (*operation)(void*);



#endif
