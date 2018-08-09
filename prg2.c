#include<stdio.h>
int main()
{
int n,count=0,i,r;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
r=n%10;
count=count+1;
n=n/10;
}
printf("%d",count);
return 0;
}

