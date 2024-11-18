#include<bits/stdc++.h>
using namespace std;
class Shape2d{

	public :

		virtual void area() = 0;

		virtual void perimeter() = 0;

};

class Rectangle : public Shape2d{

	int l,b;

	public : 

	Rectangle(int l,int b)
	{
		this->l = l;
		this->b = b;
	}

	void area()
	{

		cout<<"area of rectangle : "<<(1.0*l*b)<<endl;
	}
	void perimeter()
	{
		cout<<"perimeter of rectangle : "<<(2.0*(l+b))<<endl;
	}

};

class Circle : public Shape2d{

	int r;
	public:
	Circle(int r)
	{
		this->r = r;
	}

	void area()
	{
		double a = 3.14*r*r;
		cout<<"area of circle : "<<a<<endl;
	}
	void perimeter()
	{
		double p =2.0 * 3.14*r;
		cout<<"perimeter of circle : " <<p<<endl;
	}

}
;
int main()
{
	Shape2d *p[5];

	for(int i=0;i<2;i++)
	{
		int ln,br;
		cout<< " enter length and breadth : ";
		cin>>ln>>br;
		cout<<endl;
		p[i] = new Rectangle(ln,br);
		p[i]->area();
		p[i]->perimeter();
		cout<<endl;
	}

	for(int i=2;i<5;i++)
	{
		int r;
		cout<< " enter radius : ";
		cin>>r;
		cout<<endl;
		p[i] = new Circle(r);
		p[i]->area();
		p[i]->perimeter();
		cout<<endl;
	}
	

	return 0;
}

