#include<iostream>
#include<vector>
using namespace std ; 
void print (int a[5])
{
for(int i = 0 ;i<5;i++)
cout<<a[i]<<" " ;
}
void print ( int matrix[3][3])
{
for(int i = 0 ; i < 3;  i ++)
{
for(int j=0;j<3;j++)
cout<<matrix[i][j]<<" " ;
cout<<endl;
}
}
int main()
{
int a[5]={10,20,30,40,50};
cout<<"printing one d array "<<endl;print(a);cout<<endl;
int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
cout<<"printing two d array "<<endl ;print(matrix);cout<<endl;
return 0;
}

