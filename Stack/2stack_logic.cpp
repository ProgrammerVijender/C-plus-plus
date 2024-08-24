#include <iostream>
using namespace std;
    

class Stack{
    public:
        int* arr;
        int size;
        int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->size = -1;
    }

    void push(int data)
    {
        if(top == size-1)
        {
            cout<< "Stack is overflow";
            return;
        }

        else{
            top++;
            arr[top] = data;
        }
    }
    
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is underflow";
            return;
        }

        else{
        top--;     
        }

    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout<<"Stack is empty"<<endl;
        }

        else
        {
            return arr[top];
        }
        
        return arr[top];
    }

    int getSize()
    {
        return top+1;
    }

    void print()
    {
        for(int i=0; i<getSize(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    //make st name stack of size 8.
    Stack st(8);

    return 0;
}