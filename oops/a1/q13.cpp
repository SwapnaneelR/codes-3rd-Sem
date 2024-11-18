#include<iostream>
using namespace std;
int maximum(int a,int b , int c)
{
int maxi = (a>b)? (a>c)?a:c : (b>c)?b:c;
return maxi;
}
int maximum(int *arr,int n)
{
int maxi = arr[0];
for(int i=1;i<n;i++)
maxi = (maxi>arr[i])? maxi :arr[i];
}	

int main()
{
	cout<< " enter three integers : " <<endl ; 
	int a,b,c;
         cin>>a>>b>>c;
	cout<<" maximum of three inegers : " <<maximum(a,b,c)<<endl;
	cout<<" enter length of array : "<<endl;
	int n;
	cin>>n;
	cout<< " enter array elements " <<endl;int arr[n];
	for(int i=0;i<n;i++)
	{
	int q;cin>>q;arr[i]=q;
	}
	cout<<endl<<" highest number : " <<maximum(arr,n)<<endl;
}

