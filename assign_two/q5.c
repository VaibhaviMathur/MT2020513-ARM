#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int queue[SIZE];
int *front = &queue[0]-1;
int *rear = &queue[0]-1;
int *start = &queue[0];

void add_to_queue(int data)
{
 if((rear-start)==SIZE-1)
  printf("*********************QUEUE IS FULL**********************\n");
 else
 {
 if((front==start-1)&&(rear==start-1))    //queue is empty
  front = start;
 *(++rear) = data;
 }
}

int remove_from_queue()
{
 int element;
 if(front==start-1)
 {
  printf("*********************QUEUE IS EMPTY**********************\n");
  return -1;
 }
 else
 {
 element = *front;
 if(front==rear) front = rear = start-1;   // there's only one element in queue
 else front++;
 return element;
 }
}

void print()
{
 int *i=front;
 printf("FRONT = %p   REAR = %p\n",front,rear);
 if((front==start-1)&&(rear==start-1))
  printf("*********************QUEUE IS EMPTY...........NOTHING TO DISPLAY**********************\n");
 else
 for(i=front;i!=rear+1;printf("queue[%ld] = %d  %p\n",(i-start),queue[i-start],i),i++);
 
}

int main()
{
 int element,choice;
 while(choice)
 {
 printf("CHOOSE FROM MENU\n");
 printf("press 1 to insert an element in queue\n");
 printf("press 2 to delete an element from queue\n");
 printf("press 3 to display elements of queue\n");
 printf("enter 0 to exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
  
  case 1:
  {
   printf("enter element to be inserted\n");
   scanf("%d",&element);
   add_to_queue(element);
  }
  break;
  case 2:
  {
   element = remove_from_queue();
   if(element!=-1)
   printf("deleted element from queue is %d\n",element);
  }
  break;
  case 3: print();
          break;
  default: printf("enter correct option\n");
  }
 }
 
}
