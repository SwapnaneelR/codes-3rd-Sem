#include<iostream>
using namespace std;
int main(){
	int a = 10;
	try{
		if(a==0)

			throw 1;
		else
			throw "oiabio" ;
	}

	catch(int a)
	{
		cout<<" integer catch \n " ;
	}
	catch(char const *s)
	{
		cout<<"string caught \n ";
	}
}

