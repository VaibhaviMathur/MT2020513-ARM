#include <stdio.h>

int largest(int arr[])
{
  int i,max;
  max = arr[0];
  for(i=1;i<15;i++)
   if(arr[i]>max) max=arr[i];
  return max;
}
int main()
{
 int i;
 int arr[15];
 printf("enter 15 numbers for the array\n");
 for(i=0;i<15;scanf("%d",&arr[i++]));
 printf("Array :-\n");
 for(i=0;i<15;printf("%d ",arr[i++]));
 
 printf("\nLargest number in the aaray is %d\n",largest(arr));
 
 return 0;
}
