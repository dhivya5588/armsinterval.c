#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,f,rem,s=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
f=a;
while(a!=0)
{
rem=a%10;
s=s+rem*rem*rem;
a=a/10;
}
if(s==f)
{
printf("%d",f);
}
}
getch();
}
