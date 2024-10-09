#include <stdlib.h>
#include "util.h"
#include "card.h"
void* listGet(list l, int index){
    if(index >= l -> size){
        fprintf(stderr, "trying to access out the list @%d\n", index);
        return;
    }
    node* current = (node*) l -> head;
    for(int i = 0; i < index; i++){
        current = current -> next;
    }
    return (void*) current -> data;
}
void listAdd(list l, void* unit){

}
void listDelete(list l, int index){

}