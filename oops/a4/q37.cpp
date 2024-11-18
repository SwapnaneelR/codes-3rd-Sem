#include<bits/stdc++.h>
using namespace std;
class Complex
{

	int real;
	int img ;
	public :
	Complex(int real = 0,int img = 0)
	{
		this->real = real;
		this->img = img;
	} 
	Complex operator+(Complex a)
	{
		Complex t;
		t.real = real + a.real;
		t.img = img + a.img;
		return t;
	}
	Complex operator-(Complex a )
	{
		Complex t;
		t.real = real - a.real;
		t.img = img - a.img;
		return t ;
	}
	Complex operator*(Complex a)
	{
		Complex t;
		t.real = real*a.real - img*a.img;
		t.img = img * a.real + a.img * real;
		return t;
	}
	Complex operator/(Complex a)
	{
		Complex t;
		Complex conj ;
		conj.real = a.real;
		conj.img = -a.img;
		int deno = a.real*conj.real - a.img * conj.img;
		t.real = real*conj.real - img*conj.img;
		t.real = t.real/deno;
		t.img = a.real*conj.img+conj.real*a.img;
		return t;
	}
	
	void  display()
	{
	cout<<real << " "<<img<<endl;

	}
};
int main()
{
int a,b,c,d;
	cout<<" enter the real and imaginary part of 1st number : ";
	cin>>a>>b;	
Complex c1(a,b);
cout<<" enter the real and imaginary part of the 2nd number : ";
cin>>c>>d;
Complex c2(c,d);

Complex sum,min,product,divide;

sum = c1+c2;
cout<<"Sum : ";
sum.display();

min = c1 - c2;
cout<<"Difference : ";
min.display();

product = c1*c2;
cout<<"Product : ";
product.display();


divide = c1/c2;
cout<<"Division : ";
divide.display();



}











