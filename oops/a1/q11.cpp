#include<iostream>
#include<cstring>
using namespace std;

void strcpy(const string &s, char* ch)
{
    for(int i = 0; i < s.length(); i++)
    *(ch+i) = s[i];
    
}

int main()
{
   string s ;
   cout<<" enter a string  : " <<endl;
   cin>>s;
   char ch[s.length()+1];
   strcpy(s,ch);
   cout <<" coppy  = " << ch;
   return 0;
}
