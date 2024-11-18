#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
int t= a;
a=b;
b=t;}

int main()
{
cout<<"enter two numbers : "<<endl;
int a,b;
cin>>a>>b;
cout<<endl<<"before swap : "<<endl;
cout<<" a = "<< a<<" b = " <<b;
swap(a,b);
cout<<endl<<"after swap : "<<endl;
cout<<" a = "<<a<<" b = "<<b<<endl;
return 0;
}

