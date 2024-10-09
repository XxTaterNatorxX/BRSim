#ifndef UTIL_H
#define UTIL_H
typedef struct{
    int size;
    void* head;
}list;
typedef struct{
    void* next;
    void* prev;
    void* data;
}node;
typedef struct{
    int index;
    int weight;
}sort;

void* listGet(list l, int index);
void listAdd(list l, void* unit);
void listDelete(list l, int index);
#endif //UTIL_H