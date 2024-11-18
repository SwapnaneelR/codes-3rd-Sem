#include<iostream>
using namespace std ; 
int fact(const int & n)
{
if(n<=1)
return 1;
else
return n*fact(n-1);
}
int main()
{
int a;
cout<<" enter a number : " <<endl;
cin>>a;
int res = fact(a);
cout<<" Factorial of the number : " << res <<endl; 
 return 0;
}
