#include <iostream>
using namespace std;
#include <stack>


/*
// class Stack{
//     public:
//         int* arr;
//         int size;
//         int top;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }

//     void push(int data)
//     {
//         if(top == size-1)
//         {
//             cout<< "Stack is overflow";
//             return;
//         }

//         else{
//             top++;
//             arr[top] = data;
//         }
//     }
    
//     void pop()
//     {
//         if(top == -1)
//         {
//             cout<<"Stack is underflow"<<endl;
//             return;
//         }

//         else{
//         top--;     
//         }

//     }

//     bool isEmpty()
//     {
//         if(top == -1)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     int getTop()
//     {
//         if (top == -1)
//         {
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }

//         else
//         {
//             return arr[top];
//         }
        
//         return arr[top];
//     }

//     int getSize()
//     {
//         return top+1;
//     }

//     void print()
//     {
//             cout << "Top : " << top << endl;
//             cout << "Top element: " << getTop() << endl;

//         for(int i=0; i<getSize(); i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl<<endl;
//     }
// };
*/

int main()
{
    string str="VijenderKumar";
    stack <char> st;

    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }

    while( !st.empty())
    {
        cout<<st.top();
        st.pop();

    }

    

    return 0;
}