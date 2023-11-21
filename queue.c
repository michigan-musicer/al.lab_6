// TODO: include the header file.

// TODO: complete the functions from queue.h.

    // For queueInit, set the size of the array to be 100 
    // just like in stackInit.

    // queueSize, queueEmpty, and queueInsert are all more or less
    // the same as in stack.

    // queueFront and queuePop are different, with queuePop presenting
    // the most difficulty. Review E6 slides to learn how queues work.

        // NOTE: When writing your queuePop function, you should
        // figure out a way to make sure all the elements in the queue 
        // move forward by one position.

        // For example, consider the queue
        // q = {1, 2, 3, 4}
        // The first element in the queue array will be 1. After popping,
        // 1 should be removed and the queue should look like
        // q = {2, 3, 4}
        // and should NOT look like
        // q = {<undefined>, 2, 3, 4}
