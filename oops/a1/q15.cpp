#include<iostream>
using namespace std; 
inline void sum(int a,int b=0,int c=0)
{
cout<< " sum " <<(a+b+c)<<endl;
}
int main ()
{
sum(10,20,30);
sum(10,20);
sum(10);
return 0;
}

