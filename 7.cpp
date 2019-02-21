#include<iostream.h>
#include,conio.h>
void main()
{
int a,n,r,sum;
clrscr();
cout<<"enter the number";
cin>>a
a=n;
while(n!=0)
{
r=n%10;
sum +=r*r*r;
n/=10;
}
if(sum==a)
{
cout<<"yes";
}
else
{
cout<<"no";
}
getch();
}

