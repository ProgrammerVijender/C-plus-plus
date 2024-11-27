#include <iostream>
using namespace std;
    

// Isme push -> rear se hota h 
// or pop front se hota h 
// To find size of queue = (rear index - front index + 1)

// intialize pe rear or front dono -1 ki value rakhenge bcos queue is empty
// after single element push , queue with 1 element then front and rear on same index.


class Queue{
    public:
    int *arr;
    int rear;
    int front;
    int size;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear == size-1){
            // check full 
            cout << "Queue is full : means Queue Overflow " << endl;
            return;
        }

        else if(front == -1  && rear == -1){
            //empty case
            front++;
            rear++;
            arr[rear] = val;
        }

        else{
            // normal case
            rear++;
            arr[rear] = val;
        }
        }

        void pop(){
              
              if(rear == -1 && front == -1)
              {
                cout<<"Queue underflow condition "<<endl;
                return;
              }

                // for single element in queue front and rear dono 1 pe honge.
              else if(rear == front)
              { 
                arr[front] = -1;
                front = -1;
                rear = -1;
              }

              else
              {
                // normal case
                arr[front] = -1;
                front++;
              }
        }

        int getSize()
        {
          if(rear == -1 && front == -1)
          {
            return 0;
          }
          else
            return (rear - front + 1);
        }

        int getFront(){
          if(front  == -1)
          {
            cout<<"No element in queue , cannot give front element"<<endl;
            return -1;
          }
          else{
            return arr[front];
          }
        }

        int getRear(){
          if(rear == -1)
          {
            cout<<"No element in queue , cannot give rear element"<<endl;
            return -1;
          }
          else{
            return arr[rear];
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

        bool isEmpty(){
          if(front == -1 && rear == -1)
          {
            return true;
          }
          else{
            return false;
          }
        }
};


int main()
{
    Queue q(5);
    // cout<<endl<<"Before :  ";
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // cout<<"After  :  ";
    q.print();

    // cout<<"size of queue : "<<q.getSize() << endl;
    // cout<<"Queue is empty or not : "<<q.isEmpty()<<endl;
    
    q.pop();
    q.print();

      // now size becomes 4 from 5.
     cout<<"size of queue : "<<q.getSize() << endl;


     // NOW PUSH 100 which is unable to push
     // overflow condition

    //   q.push(100);
    //   q.print();

    //   q.pop();
    //   q.pop();
    //   q.pop();

    //   q.print();
    //   cout<<q.getFront()<<endl;


    //   q.pop();
    //   q.print();

    //  cout<<q.getSize() << endl;


    cout << q.getFront() << endl;

    cout << q.getRear() << endl;


    return 0;
}