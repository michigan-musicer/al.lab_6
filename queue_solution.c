#include "queue_solution.h"

// Initializes the queue.
void queueInit(queueType* q) {
    q->_q = (int*)( malloc(100 * sizeof(int)));
    q->_sz = 0;
}

// Returns size of queue.
size_t queueSize(queueType* q) 
{
    return q->_sz;
}

// Returns 1 if queue is empty and 0 otherwise.
int queueEmpty(queueType* q) 
{
    return q->_sz == 0;
}

// Returns "front" of queue, which is the first element 
// inserted.
int queueFront(queueType* q) 
{
    return q->_q[0];
}

// Inserts an element into the queue. See E6 slides for 
// a more thorough explanation.
void queueInsert(queueType* q, int eltToInsert) 
{
    if (q->_sz == 100) {
        return;
    }
    q->_q[q->_sz] = eltToInsert;
    q->_sz++;
}

// Pops an element from the queue. See E6 slides for a
// more thorough explanation.
int queuePop(queueType* q) 
{
    q->_q[0] = EMPTY;
    for (size_t i = 1; i < q->_sz; ++i) {
        q->_q[i - 1] = q->_q[i];
    }  
    q->_sz--;
}
