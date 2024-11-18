#include<bits/stdc++.h>
using namespace std;
class Base{
	public:
		Base()
		{
			cout<<"base constructor"<<endl;
		}
		virtual ~Base()
		{
			cout<<"Base destructor"<<endl;
		}
};

class Derived : public  Base{

	public : 

		Derived()
		{
			cout<<"Derived constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived destructor"<<endl;
		}
};
		int main()
		{
			Base *p;
			p = new Derived();
			delete p;
			return 0;
		}
