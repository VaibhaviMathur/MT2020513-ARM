#include <stdio.h>
int find_greatest(int a,int b,int c)
{
 if((a>b) && (a>c)) return a;
 else if(b>c) return b;
 else return c;
}

int main()
{
 int a,b,c;
 printf("enter any three numbers\n");
 scanf("%d %d %d",&a,&b,&c);
 
 printf("greatest number aming the three is %d\n",find_greatest(a,b,c));
 return 0;
}
