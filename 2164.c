#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct queue{
   int data;
   struct queue* prev;
   struct queue* next;
}queue;

void card(queue* back, queue* front){
  
}

int main(){
  queue* back = (queue*)malloc(sizeof(queue));
  queue* front = (queue*)malloc(sizeof(queue));
  queue* last = (queue*)malloc(sizeof(queue));
  int n;
  scanf("%d", &n);
  for(int i=1;i<=n;i++){
    queue* value = (queue*)malloc(sizeof(queue));
    value->data = i;
    if(i==1){
      front->prev = value;
      last->next = value;
      value->next = front;
    }
    else if(i==n){
      back->next = value;
      last->next = value;
      value->prev = back;
    }
    else{
      value->next = last->next;
      value->next->prev = 
    }
  }
  card(back,front);
}