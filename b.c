#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],s,b;
clrscr();
printf("Enter the number");
scanf("%d",&b);
for(s=0;s<b;s++)
{
scanf("%d",&a[s]);
}
for(s=0;s<b;s++)
{
if(a[s]==s)
printf("%d",s);
}
getch();
}
