#include "lab06.h"

int testStack() {
    stackType stk;
    stackInit(&stk);
    assert(stackEmpty(&stk) && "should start empty");
    stackInsert(&stk, 2);
    stackInsert(&stk, 3);
    stackInsert(&stk, 5);
    stackInsert(&stk, 7);
    assert(stackSize(&stk) == 4 && "inserted 4 elements but size is not 4");
    assert(stackTop(&stk) == 7 && "stack top should be 7");
    
    stackPop(&stk);
    assert(stackSize(&stk) == 3 && "size should go from 4 to 3 after pop");
    assert(stackTop(&stk) == 5 && "stack top should be 5");
    stackPop(&stk);
    stackPop(&stk);
    assert(stackTop(&stk) == 2 && "stack top should be first insert, 2");
    stackInsert(&stk, 10);
    assert(stackTop(&stk) == 10 && "stack top should be most recent insert, 10");
    stackPop(&stk);
    assert(stackTop(&stk) == 2 && "stack top should be first insert, 2");
    stackPop(&stk);
    assert(stackEmpty(&stk) && "should now be cleared");
}

int testQueue() {
    queueType queue;
    queueInit(&queue);
    assert(queueEmpty(&queue) && "should start empty");
    queueInsert(&queue, 2);
    queueInsert(&queue, 3);
    queueInsert(&queue, 5);
    queueInsert(&queue, 7);
    assert(queueSize(&queue) == 4 && "inserted 4 elements but size is not 4");
    assert(queueFront(&queue) == 2 && "queue front should be 2");
    
    queuePop(&queue);
    assert(queueSize(&queue) == 3 && "size should go from 4 to 3 after pop");
    assert(queueFront(&queue) == 3 && "queue front should be 3");
    queuePop(&queue);
    queuePop(&queue);
    assert(queueFront(&queue) == 7 && "queue front should be last insert, 7");
    queueInsert(&queue, 10);
    assert(queueFront(&queue) == 7 && "queue front should still be last insert, 7");
    queuePop(&queue);
    assert(queueFront(&queue) == 10 && "queue front should be last insert, 10");
    queuePop(&queue);
    assert(queueEmpty(&queue) && "should now be cleared");
}

int main() {
    testStack();
    // Comment out testQueue if you are trying to implement queue.
    testQueue();
}