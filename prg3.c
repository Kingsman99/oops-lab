#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n=0,x;
for(i=1;i<=9;i++)
{
for(j=0;j<=9;j++)
{
n=i*1000+i*100;
if(i==j)
{
continue;
}
n+=j*10+j;
x=sqrt(n);
if(x*x==n)
printf(" %d",n);

}
}
return 0;
}
