lab06: lab06.c stack.c queue.c
	gcc lab06.c stack.c queue.c lab06.h stack.h queue.h -o lab06 
	./lab06

solution: lab06_solution.c stack.c queue_solution.c
	gcc lab06_solution.c stack.c queue_solution.c lab06_solution.h stack.h queue_solution.h -o solution 
	./solution