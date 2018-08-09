#include<stdio.h>
void  main()
{
int i,j,v;
scanf("%d",&i);
scanf("%d",&j);
if(i%j==0)
  printf("%d",i);
   else
    v=i/j;
   v=v+1;
   printf("%d",v*j);
}



