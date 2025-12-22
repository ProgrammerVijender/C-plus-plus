#include <iostream>
using namespace std;
    


class  Cqueue
{
public:
    int* arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        
        arr = new int[size];
        this->size = size;
        front = rear = -1;

    }

    void push(int val){
        //

        // overflow case
        if(rear == size-1)
        {
            cout<<"Queue is full : Queue Overflow"<<endl;
        }

        //empty case 
        else if(front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        // circulare ke liye 
        else if(rear == size-1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        // normal case
        else{
            rear++;
            arr[rear] = val;
        }

    }
    void pop(){
     // 4. conditions:-
        // underlow
        // single element
        // circular nature
        // normal case


        // underflow 
        if(rear == -1 && front == -1)
        {
            cout<<"Queue is empty : Queue Underflow"<<endl;
        }

        // single element
        else if( rear == front)
        {
            // go back to empty queue state
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // circular nature
        else if (front == size-1)
        {
           arr[front] = -1;
           front = 0;
        }

        // normal case
        else{
            arr[front] = -1;
            front++;
        }

    }
        void print(){
          cout<<"Printing queue : ";
          for(int i=0; i<size; i++)
          {
            cout<<arr[i]<<" ";
          }
          cout<<endl;
          }
       
       
};

int main()
{
    // cout << "Hello, World!" << endl;

    Cqueue q(5);

    q.print();

    q.push(10);
    // q.print();

    q.push(20);
    // q.print();

    q.push(30);
    // q.print();

    q.push(40);
    // q.print();

    q.push(50);
    // q.push(60);

    q.pop();
    // q.pop();
    q.pop();
    q.push(60);
    q.push(70);
    
     q.print();

    return 0;
}
