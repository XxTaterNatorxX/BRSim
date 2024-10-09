#ifndef UTIL_H
#define UTIL_H
typedef struct node{
    struct node* next;
    struct node* prev;
    void* data;
}node;
typedef struct{
    int size;
    node* head;
}List;
typedef struct{
    int index;
    int weight;
}sort;

void ListInit(List* l);
void* ListGet(List* l, int index);
void ListAdd(List* l, void* unit);
void ListDelete(List* l, int index);
#endif //UTIL_H