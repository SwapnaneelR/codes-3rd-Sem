#include<bits/stdc++.h>
using namespace std;
class Shape 
{
	public :
		virtual void get_details() = 0;
		virtual void display() = 0;

};

class TwoDshape : public Shape{

	public : 

		virtual void getArea() = 0;

};
class ThreeDshape : public Shape{

	public  : 

		virtual void getArea() = 0;
		virtual void getVolume() = 0;

};

class  Circle : public TwoDshape{
		int r ; 
		public :
void get_details()
{
	int radius;
	cout<<" enter radius : ";
	cin>>radius;
	this->r = radius;
}

void getArea()
{
	cout<<" area of circle : "<<(3.14*r*r)<<endl;
}
void display()
        {
                cout<<" shape : circle " <<endl;
                getArea();
        }


};

class Triangle : public TwoDshape
{
	int l,b;
	public : 
	void get_details()
	{
		int len,br;
		cout<<" enter length and breadth : ";
		cin>>len>>br;
		this->l = len;
		this->b = br;
	}

	void getArea()
	{
		cout<< " araea of triangle : " << (0.5*l*b)<<endl;
	}
	void display()
        {
                cout<<" shape : triangle " <<endl;
                getArea();
        }


};

class Ellipse : public TwoDshape
{
	int a,b;
	public :
	void get_details()
	{
		int a1,b1;
		cout<< " enter the value of a and b : ";
		cin>>a1>>b1;
		this->a=a1;
		this->b = b1;
	}
	
	void getArea()
	{
		cout<<" area of ellipse : "<<(3.14 * a * b)<<endl;
	}
	 void display()
        {	
                cout<<" shape : ellipse " <<endl;
       		getArea();
	}

};


class Sphere : public ThreeDshape
{
	int r;
	public :
	void get_details()
	{
		int radius;
		cout<< " enter the value of radius  : ";
		cin>>radius;
		this->r=radius;
	}

	void getArea()
	{
		cout<< " area of sphere : "<<(3.14 * 4 * r *r )<<endl;
	}
	void getVolume()
	{
		cout<<" volume of sphere : "<<(4.0/3.0*r*r*r *3.14)<<endl;
	}
	  void display()
        {
                getArea();
                getVolume();
                cout<<" shape : sphere " <<endl;
        }

};

class Cube : public ThreeDshape
{
	int r;
	public :
	void get_details()
	{
		int a;
		cout<< " enter the value of a side  : ";
		cin>>a;
		this->r=a;
	}
	
	void getArea()
	{
		cout<< " area of cube : "<<(6*r*r )<<endl;
	}
	void getVolume()
	{
		cout<<" volume of cube : "<<(r*r*r)<<endl;
	}
	 void display()
        {
                getArea();
                getVolume();
                cout<<" shape : cube " <<endl;
        }

};

int main()

{

	vector<Shape*>p;
	int index = 0 ; 
	while(1)
	{
		cout<<"Enter 1. for circle 2. for triangle 3. for ellipse 4. for sphere 5. cube 0. for exit " <<endl;

		int ch;

		

		cin>>ch;

		if(ch==1)
		{
			
			p.push_back(new Circle);
		}
		else if(ch==2)
		{
			p.push_back(new Triangle);
		}
		else if (ch==3)
		{
			p.push_back(new Ellipse);
		}
		else if (ch==4)
		{
			p.push_back(new Sphere);
		}
		else if(ch==5)
		{
			p.push_back(new Cube);
		}
		else break;
		cout<<endl<< " THE GIVEN CHOICE : "<<ch<<endl;
		p[index]->get_details();
		cout<<endl;
		cout<<" OUTPUT : "<<endl;
		p[index]->display();
		cout<<endl;index++;
	}


	return 0;
}












