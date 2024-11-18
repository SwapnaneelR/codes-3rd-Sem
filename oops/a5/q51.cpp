/*Write a template function swap() that is capable of interchanging the values of two variables. 
 * Used this function to swap (i) two integers, (ii) two complex numbers (previous code may be reused).
 * Now write a specialized template function for the class Stack (previous code may be reused). 
 * Also swap two stacks using this template function.*/
#include<bits/stdc++.h>
using namespace std;

template<class T>
void swapt( T &a, T &b ){
    T temp = a;
    a = b;
    b=temp;
}

class Stack{
    int *arr;
    int t;
    int size;
    public:
        Stack(int s=100){
            arr=new int[s];
            t=-1;
            size=s;
        }
        class Overflow{
            public:
            Overflow(const char* str){
                cout<<"Stack overflow Exception"<<endl;
            }
        };

        class Underflow{
            public:
            Underflow(const char* str){
                cout<<"Stack Underflow Exception"<<endl;
            }
        };

        void push(int a){
            if(t==size-1){
                throw Overflow("stack full");
            }
            else{
                arr[++t]=a;
            }
        }

        int pop(){
            if(t==-1){
                throw Underflow("No elements");
            }
            else{
                int a=arr[t--];
                return a;
            }
        }

        bool empty(){
            if(t==-1){
                return true;
            }
            return false;
        }

        int top(){
            if(t==-1){
                throw Underflow("No elements");
            }
            return arr[t];
        }
};


int main(){
    try{
        int a=3,b=5;
        cout<<"Values of a and b before swap: "<<a<<b<<endl;
        swapt(a,b);
        cout<<"Values of a and b after swap: "<<a<<b<<endl;

        Stack s1(4),s2(6);
        s1.push(1);
        s1.push(2);
        
        
        s2.push(3);
        s2.push(4);
        s2.push(3);
        s2.push(4);
        s2.push(3);
        s2.push(4);
        swapt(s1,s2);
        cout<<"Stack successfully swapped";
    }
    catch(Stack::Overflow ob1){
        cout<<"stack full"<<endl;
    }
    catch(Stack::Underflow ob2){
        cout<<"Empty stack"<<endl;
    }
    catch(...){
        cout<<"Default exception"<<endl;
    }
}

