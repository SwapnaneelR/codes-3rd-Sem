#include<bits/stdc++.h>
using namespace std;

class Point
{
	int x,y;

	public :

	Point(int x,int y)
	{
		this->x= x;
		this->y=y;
	}
	void  operator-(Point &ob)
	{

		double dist = sqrt(pow((x-ob.x),2)+pow((ob.y-y),2));

		cout<<"distance : "<<dist<<endl;

	}
};

	int main()

	{



		int a1,b1,a2,b2;
		cout<<" enter initial x and y : ";
		cin>>a1>>b1; 

		Point p1(a1,b1);

		cout<< " enter final x and y : ";  
		cin>>a2>>b2;
		Point p2(a2,b2);

		p1-p2;

		return 0;
	}

