#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void swapp(char *a, char *b)
{
char t[100];
strcpy(t,a);
strcpy(a,b);
strcpy(b,t);
}
int main()
{
char a[100],b[100];
cout<<"enter two strings "<<endl;
cin>>a;
cin>>b;
cout<<" before swap : " << " a = " <<a<<" b = "<< b <<endl;
swapp(a,b);
cout<<" after swap : " << " a = " <<a<< " b = "<< b <<endl;
return 0;
}
