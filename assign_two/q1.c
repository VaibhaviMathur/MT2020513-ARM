#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int stack[SIZE];

int *start = &stack[0];        //pointing to start of array
int *SP = (&stack[0])+SIZE;    //stack pointer pointing to next address of array 


void push(int data)
{
 if((SP-start)==0)     //if stack pointer points at start of array
  printf("---------------------------------STACK IS FULL------------------------------------------\n");
 else
 {
  SP--;
  *SP = data;
 }
}

int pop()
{
 int temp;
 if(SP==start+SIZE)     //if stack pointer points to address after array
 {
  printf("---------------------------------STACK IS EMPTY------------------------------------------\n");
  return -1;
 }
 else
 {
  temp = *SP;
  SP++;
  return temp;
 }
}

void print()
{
 int *i;
 printf("STACK POINTER CONTENT = %p\n",SP);
 if(SP==(start+SIZE))
  printf("---------------------------------STACK IS EMPTY.......NOTHING TO DISPLAY------------------------------------------\n");
 else
 {
  i=SP;
  
  while(i!=(start+SIZE))        //if stack pointer points to address after array
  {
   printf("stack[%ld] = %d      %p\n",(i-start),stack[i-start],i);
   i++;
  }
 }
}

int main()
{
 
 int element,choice;
 while(choice)
 {
 printf("CHOOSE FROM MENU\n");
 printf("press 1 to insert an element in stack\n");
 printf("press 2 to delete an element from stack\n");
 printf("press 3 to display elements of stack\n");
 printf("enter 0 to exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
  
  case 1:
  {
   printf("enter element to be inserted\n");
   scanf("%d",&element);
   push(element);
  }
  break;
  case 2:
  {
   element = pop();
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

