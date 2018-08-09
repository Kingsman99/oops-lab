#include<stdio.h>
int fact( int n)
{
if(n==1)
{
return n;
}
else
return n*(n-1);
}
int main()
{
int l,w;
scanf("%d",&l);
w=fact(l);
printf("%d",w);
return 0;
}
