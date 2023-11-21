#include "stack.h"

// Initializes the stack.
// NOTE: dynamic allocation doesn't actually do anything
// useful for us here. Next week, we will implement the C++
// vector which does take advantage of dynamic allocation
// in a useful way.
void stackInit(stackType* s) {
    s->_s = (int*)( malloc(100 * sizeof(int)));
    s->_sz = 0;
}

// Returns size of stack.
size_t stackSize(stackType* s) 
{
    return s->_sz;
}

// Returns 1 if stack is empty and 0 otherwise.
int stackEmpty(stackType* s) 
{
    return s->_sz == 0;
}

// Returns "top" of stack, which is the last element 
// inserted.
int stackTop(stackType* s) 
{
    return s->_s[s->_sz - 1];
}

// Inserts an element into the stack. See E6 slides for 
// a more thorough explanation.
void stackInsert(stackType* s, int eltToInsert) 
{
    if (s->_sz == 100) {
        return;
    }
    s->_s[s->_sz] = eltToInsert;
    s->_sz++;
}

// Pops an element from the stack. See E6 slides for a
// more thorough explanation.
int stackPop(stackType* s) 
{
    s->_s[s->_sz - 1] = EMPTY;
    s->_sz--;
}
