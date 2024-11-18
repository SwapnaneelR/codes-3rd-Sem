#include<iostream>
using namespace std ; 
inline int sum (int a,int b)
{
return a+b;
}
int main()
{
cout<< " enter 2 integers : " <<endl;
int a,b;
cin>>a>>b;
int s = sum (a,b);
cout<< " sum = " << s<<endl;
}

