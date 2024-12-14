#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct queue{
  int data;
  int type;
  struct queue* prevqueue;
  struct queue* nextqueue;
}queue;

int main(){
  int n;
  scanf("%d", &n);
  queue* last = (queue*)malloc(sizeof(queue));
  queue* first = (queue*)malloc(sizeof(queue));
  int* a = (int*)malloc(sizeof(int)*n);
  for(int u=0;u<n;u++){
    scanf("%d",&a[u]);
  }
  
  int* b = (int*)malloc(sizeof(int)*n);
  for(int y=0;y<n;y++){
    scanf("%d",&b[y]);
  }
  for(int q=0;q<n;q++){
    if(q == 0){
      if(a[q] == 0){
        queue* qs = (queue*)malloc(sizeof(queue));
        qs->type = 0;
        qs->data = b[q];
        last->nextqueue = qs;
        first->nextqueue = qs;
      }
      else if (a[q] == 1){
        queue* qs = (queue*)malloc(sizeof(queue));
        qs->type = 1;
        qs->data = b[q];
        last->nextqueue = qs;
        first->nextqueue = qs;
      }
    }
    else{
      if(a[q] == 0){
        queue* qs = (queue*)malloc(sizeof(queue));
        qs->type = 0;
        qs->data = b[q];
        qs->prevqueue = last->nextqueue;
        last->nextqueue->nextqueue = qs;
        last->nextqueue = qs;
      }
      else if (a[q] == 1){
        queue* qs = (queue*)malloc(sizeof(queue));
        qs->type = 1;
        qs->data = b[q];
        qs->prevqueue = last->nextqueue;
        last->nextqueue->nextqueue = qs;
        last->nextqueue = qs;
      }
    }
  }
  int r;
  scanf("%d", &r);
  int* value = (int*)malloc(sizeof(int)*r);
  for(int p=0;p<r;p++){
    scanf("%d",&value[p]);
  }
  for(int i=0;i<r;i++){
    int output;
    for(int j=0;j<n;j++){
      if(j == 0){
        if(first->nextqueue->type == 0){
          output = first->nextqueue->data;
          first->nextqueue->data = value[j];
          last->nextqueue = first->nextqueue->nextqueue;
        }
        else if(first->nextqueue->type == 1){
          output = value[j];
          last->nextqueue = first->nextqueue->nextqueue;
        }
       
      }
      else{
        if(last->nextqueue->type == 0){
          int cp = output;
          output = last->nextqueue->data;
          last->nextqueue->data = cp;
          last->nextqueue = last->nextqueue->nextqueue;
        }
        else if(last->nextqueue->type == 1){
          output = output;
          last->nextqueue = last->nextqueue->nextqueue;
        }
      }
    }
    printf("%d ", output);
  }
}