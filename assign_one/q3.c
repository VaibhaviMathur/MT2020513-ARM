#include <stdio.h>

int Even_no(int arr[])
{
  int i,count;
  
  for(i=0,count=0;i<20;i++)
   if(arr[i]%2==0) count++;
  return count;
}
int main()
{
 int i;
 int arr[20];
 printf("enter 20 numbers for the array\n");
 for(i=0;i<20;scanf("%d",&arr[i++]));
 printf("Array :-\n");
 for(i=0;i<20;printf("%d ",arr[i++]));
 
 printf("\nNo of even numbers in the aaray is %d\n",Even_no(arr));
 
 return 0;
}
