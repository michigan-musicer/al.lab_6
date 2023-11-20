#include "stack.h"

// NOTE: dynamic allocation doesn't actually do anything
// useful for us here. Next week, we will implement the C++
// vector which does take advantage of dynamic allocation
// in a useful way.
void stackInit(stackType* s) {
    s->_s = (int*)( malloc(100 * sizeof(int)));
    s->_sz = 0;
}

size_t stackSize(stackType* s) 
{
    return s->_sz;
}

int stackEmpty(stackType* s) 
{
    return s->_sz == 0;
}

int stackTop(stackType* s) 
{
    return s->_s[s->_sz - 1];
}

void stackInsert(stackType* s, int eltToInsert) 
{
    if (s->_sz == 100) {
        return;
    }
    s->_s[s->_sz] = eltToInsert;
    s->_sz++;
}

int stackPop(stackType* s) 
{
    s->_s[s->_sz - 1] = EMPTY;
    s->_sz--;
}
