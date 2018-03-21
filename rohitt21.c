#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,count1=0;
printf("enter the value\n");
scanf("%d",&m);
for(i=2;i<=(n/2);i++)
{
if(n%i==0)
{
count1++;
}
if(count1==0)
{
printf("prime");
}
else
{
printf("no prime");
}
}
getch();
return 0;
}
