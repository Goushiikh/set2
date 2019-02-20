#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,no,temp=0;
clrscr();
cout<<"enter the number";
cin>>no;
b=no;
while(no>0)
{
a=no%10;
no=no%10;
temp=temp*10+a;
}
if(temp==b)
{
cout<<"palindrome";
}
else
{
cout<<"not a palindrome";
}
getch();
}
