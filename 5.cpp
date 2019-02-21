#include<iostream.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
cout<<"enter two numbers";
cin>>a>>b;
while(a<b)
{
if(a%2==0)
{
cout<<a;
}
a++;
}
getch();
}
