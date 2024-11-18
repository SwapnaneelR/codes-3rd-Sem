
#include<iostream>
using namespace std;
int main()
{
 cout<<"enter numerator and denomninator ";
	int a ,b ;
cin>>a>>b;
try{\
if(b==0)
throw -1;
cout<<"result = " <<a/b;
}
catch(int a){
cout<<"Zero denominator ";
}
}
 
