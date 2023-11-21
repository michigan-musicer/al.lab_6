#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define EMPTY __INT_MAX__

// dynamic array implementation of stack
// Read about structs here: https://learn.microsoft.com/en-us/cpp/c-language/structure-declarations?view=msvc-170
// or here in Polish: https://pl.wikipedia.org/wiki/Struktura_(programowanie)
typedef struct stack 
{
    int* _s;
    size_t _sz;
} stackType;

void stackInit(stackType* s);
size_t stackSize(stackType* s); 
int stackEmpty(stackType* s);
int stackTop(stackType* s);
void stackInsert(stackType* s, int eltToInsert);
int stackPop(stackType* s);

#endif // STACK_H