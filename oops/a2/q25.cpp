#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    bool isEmpty() { return front == -1; }
    bool isFull() { return rear == size - 1; }
    void push(int x)
    {
        if (isFull())
        {
            cout << "overflow";
            return;
        }
        else if (isEmpty())
        {
            rear = front = 0;
            arr[0] = x;
        }
        else
            arr[++rear] = x;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "underflow";
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
                front++;
        }
    }
    int peek()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }
    void display()
    {
		cout<<"queue : "<<endl;
	    while(!isEmpty())
	    {
		  
		    cout<<peek()<<" ";
			pop();

	    }
	    cout<<endl;
    }
};
int main()
{
Queue q(10);
q.push(2);q.push(3);
q.push(4);q.push(5);
q.pop();
q.pop();
q.display();

return 0;
}

