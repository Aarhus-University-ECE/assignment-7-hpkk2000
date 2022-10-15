#include "stack.h"

void initialize(stack* s){
  s->head = NULL; //initialisere head til at skulle være NULL
}


void push(int x, stack* s){
  node* temp = malloc(sizeof(node)); //allokere hukommelse på heapen og laver er en pointer som pointer på  
	temp->data = x;
	temp->next = s->head; //sørger for temp->next = NULL 
	s->head = temp; //sørger for head pointere til den nye node.
}

int pop(stack* s){
  node* temp = s->head; //laver node pointer til at pointere til første element
	s->head = temp->next; //sørger for at head pointere til temp next node
  int hold = temp->data; 
	free(temp);
  return hold;
}

bool empty(stack* s)
{
  if (s->head != NULL) //hvis head pointere til en node er stacken ikke tom. 
    return false;
}

bool full(stack* s) {
    //stacken er aldrig fuld
  return false;
}
