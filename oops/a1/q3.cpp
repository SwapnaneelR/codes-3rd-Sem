#include<iostream>
using namespace std;
int main()
{
 int n;
cout<<" enter a number : " <<endl;
cin>>n;
int arr[n+1];
arr[0]=1;
arr[1]=1;
for(int i =1;i<=n;i++)
{
arr[i] = i *arr[i-1] ;
}
for(int i = 1;i<=n; i++)
cout<<i<<" ! = " <<arr[i]<<endl;
}
