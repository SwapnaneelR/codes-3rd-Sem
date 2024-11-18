#include<iostream>
using namespace std;
int fact(const int n)
{
if(n<=1)
return n;
else
return n*fact(n-1);
}
int main()
{
int n;
cout<<" Enter a number  : " <<endl;
cin>>n;
int result = fact(n);
cout<< " factorial of given number : " << result;
return 0;
}

