#include<bits/stdc++.h>
using namespace std;

class Rectangle{
int h;
int b;
public :
Rectangle(int h,int b)
{
this->h=h;
this->b=b;
}
int area()
{
return h*b;
}
};
int main()
{

for(int i=0;i<4;i++)
{
int h,b;
cout<<"enter height and breadth : \n"<<endl;

cin>>h>>b;

Rectangle ob(h,b);
cout<< " Area = "<<ob.area()<<endl;


}
}
