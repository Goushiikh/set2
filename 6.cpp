#include<iostream.h>
using namespace std;
int main(void)
{
int a,b,i,f;
cout<<"enter two numbers";
cin>>a>>b;
while(a<b)
{
f=0;
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
f=1;
break;
}
}
if(f==0)
{
cout<<a;
++a;
}
return(0);
}
