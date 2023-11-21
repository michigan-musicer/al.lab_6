// TODO: Add preprocessor definitions here.

// TODO: You should have EMPTY defined with preprocessor directives.
// EMPTY should be set to some placeholder value.

// dynamic array implementation of queue
// Read about structs here: https://learn.microsoft.com/en-us/cpp/c-language/structure-declarations?view=msvc-170
// or here in Polish: https://pl.wikipedia.org/wiki/Struktura_(programowanie)
typedef struct queue 
{
    int* _q;
    size_t _sz;
} queueType;

void queueInit(queueType* q);
size_t queueSize(queueType* q); 
int queueEmpty(queueType* q);
int queueFront(queueType* q);
void queueInsert(queueType* q, int eltToInsert);
int queuePop(queueType* q);
