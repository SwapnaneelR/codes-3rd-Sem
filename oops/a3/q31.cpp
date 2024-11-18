#include<bits/stdc++.h>
using namespace std;

class Person 
{
string name ;
int age;
int height;
public :

void setName(string name){
this->name = name;
}
void setAge(int age)
{
this->age = age;
}
void setHeight(int height)
{
this->height=height;
}
Person(string name , int age , int height)
{
setName(name) ;
setAge(age);
setHeight(height);
}
virtual void printDetails()
{
cout<<" name  : " <<name<<endl;
cout<<" age : "<<age<<endl;
cout<<" height : "<<height<<endl;
}
};
class Student : public Person
{
int roll; int year;
public : 
Student(int roll=0,int year=0):Person("abc",0,0)
{
this->roll = roll;
this->year = year ;
}

void printDetails()
{
Person::printDetails();
cout<<" roll no : "<<Student::roll<<endl;
cout<<" year of admission : " <<Student::year<<endl;
}
};
int main()
{
Person *p[2];


//p[0]= new Student(15,2023);
//p[1] = new Student(10,2027);

for(int i=0;i<2;i++)
{
cout<<"enter name age height roll and year"<<endl;
string n;int a,h,r  ,y;
cin>>n>>a>>h>>r>>y;
p[i]=new Student(r,y);
p[i]->setName(n);
p[i]->setAge(a);
p[i]->setHeight(h);
p[i]->printDetails();
//dynamic_cast<Student*>(p[i])->printDetails();

//dynamic_cast<Student*>(p[1])->printDetails();
}
return 0;
}

