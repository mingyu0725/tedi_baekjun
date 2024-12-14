// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// typedef struct queue{
//    int data;
//    struct queue* prev;
//    struct queue* next;
// }queue;

// void card(queue* back, queue* front){
//   queue* cp = back;
//   int i=0;
//   while(back->next != front){
//     i++;
//     back=back->next;
//   }
//   printf("\n\n[i] = %d\n", i);
  
//   back=cp;
  
//   back->next = back->next->next;
//   cp->next = back->next->next;
//   cp->next->prev = cp;
  
//   back->next->prev = front->prev;
//   front->prev->next = back->next;
//   printf("[1cp] %d\n", cp->next->data);
  
//   front->prev = back->next;
//   front->prev->next = front;
//   printf("[2cp] %d", cp->next->next->data);
//   back = cp;
//   printf("\n");
//   while(back->next != front){
//     back=back->next;
//     printf("%d->",back->data);
//   }
//   back = cp;
// }

// int main(){
//   queue* back = (queue*)malloc(sizeof(queue));
//   queue* front = (queue*)malloc(sizeof(queue));
//   queue* last = (queue*)malloc(sizeof(queue));
//   int n;
//   scanf("%d", &n);
//   for(int i=1;i<=n;i++){
//     queue* value = (queue*)malloc(sizeof(queue));
//     value->data = i;
//     if(i==n){
//       front->prev = value;
//       value->next = front;
//       value->prev = last->next;
//       value->prev->next = value;
//       value->data = i;
//       printf("%d->",value->data);
//       printf("front");
      
//     }
//     else if(i==1){
//       back->next = value;
//       last->next = value;
//       value->prev = back;
//       value->data = i;
      
//       printf("back->");
//       printf("%d->",value->data);
//     }
//     else{
//       value->prev = last->next;
//       last->next->next = value;
//       last->next = value;
//       value->data = i;
//       printf("%d->",value->data);
//     }
//   }
//   card(back,front);
//   printf("\n");
//   queue* back_cp = back;
//   printf("back->");
//   while(back->next != front){
//     back=back->next;
//     printf("%d->",back->data);
//   }
//   printf("front");
//   back = back_cp;
// }