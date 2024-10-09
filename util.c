#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "card.h"
void ListInit(List* l){
    l -> size = 0;
    l -> head = NULL;
}
void* ListGet(List* l, int index){
    if(index >= l -> size){
        fprintf(stderr, "trying to access out the List @%d\n", index);
        return NULL;
    }
    node* current = (node*) l -> head;
    for(int i = 0; i < index; i++){
        current = current -> next;
    }
    return (void*) current -> data;
}
void ListAdd(List* l, void* unit){

    node* new_node = malloc(sizeof(node));
    if(new_node == NULL){
        fprintf(stderr, "malloc fail in ListAdd");
    }
    new_node -> data = unit;
    if(l -> head == NULL){
        l -> head = new_node;
        l -> head -> prev = new_node;
        l -> head -> next = new_node;
    }
    l -> head -> prev -> next = new_node;
    new_node -> prev = l -> head -> prev;
    new_node -> next = l -> head;
    l -> head -> prev = new_node;
    l -> size ++;
}
void ListDelete(List* l, int index){
    //iterate and find
    if(index > l -> size){
        fprintf(stderr,"attempting to delete out of the List");
        return;
    }
    node* current = l -> head;
    int check = 0;
    for(int i =0; i < index; i++){
        current = current -> next;
        check = 1;
    }
    current -> next -> prev = current -> prev;
    current -> prev -> next = current -> next;
    if(check ==1){
        l -> head = current -> next;
    }
    l -> size --;
    free(current);
}