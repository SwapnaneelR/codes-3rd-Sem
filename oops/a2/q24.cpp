#include<bits/stdc++.h>
using namespace std ;

class Stack
{
 int *arr;
    int size;
    int top;

public:
      Stack(int size)
    {
        top = -1;
        this->size = size;
        arr = new int(size);
    }
    void push(int data)
    {
        if (top == size - 1)
            cout << "size finish";
        else
            arr[++top] = data;
    }

    void pop()
    {
        if (top == -1)
            cout << "empty";
        else
            top--;
    }

    int peek()
    {
        if (top == -1)
            return -1;
        else
            return arr[top];
    }
    bool empty()
    {
        if (top == -1)
            return true;
        return false;
    }
    void display()
    {
	    while (!empty())
	    {
		    cout << peek()  << " ";
		    pop();
    }
    cout << endl;
}
};
int main()
{
Stack s(10) ;
s.push(2);s.push(3);
s.push(4);s.push(5);
s.pop();
s.display();
}
