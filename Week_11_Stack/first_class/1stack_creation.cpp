#include <iostream>
#include <stack>

using namespace std;
    
int main()
{
    // creation
    stack <int> st;

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);

    // Size check
    cout<< "size of stack is : "<<st.size() <<endl;

    // pop/remove element
    st.pop();

    //check empty
    if(st.empty())
    {
        cout<<"Stack is empty"<<endl;
    }

    else{
        cout<<"Stack is Not empty"<<endl;
    }

    //top element
    cout<<st.top()<<endl;

    // Again Size check
    cout<< "size of stack is : "<<st.size() <<endl;
    return 0;
}

// OUTPUT
// 3
// Stack is Not empty
// 20
// 2
