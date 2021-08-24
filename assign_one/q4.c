#include <stdio.h>

int sort(int arr[])
{
  int i,j,temp;
  for(i=0;i<20;i++)
  {
   for(j=i+1;j<20;j++)
   {
    if(arr[i]>arr[j])
    {
     temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
    }
   }
  }
}
int main()
{
 int i;
 int arr[20];
 printf("enter 20 numbers for the array\n");
 for(i=0;i<20;scanf("%d",&arr[i++]));
 printf("Array before sorting:-\n");
 for(i=0;i<20;printf("%d ",arr[i++]));
 sort(arr);
 printf("\nArray in ascending order :\n");
 for(i=0;i<20;printf("%d ",arr[i++]));

 
 return 0;
}
