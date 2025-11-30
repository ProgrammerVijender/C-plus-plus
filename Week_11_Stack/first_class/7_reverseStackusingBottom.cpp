// new element ko sabse niche push krna h using recursion

#include <iostream>
#include<stack>

using namespace std;


void insertAtBottom(stack<int> &st,int element)
{
    //base case
    if(st.empty())
    {
        st.push(element);
        return;
    }

    //store top
    int temp = st.top();

    //top ko pop krra h
    st.pop();

    insertAtBottom(st,element);

    st.push(temp);
}

// reverse using upper wala insertAtBottom function
void reverseStack(stack<int> &st)
{
    //base case
    if(st.empty())
    {
        return;
    }

    //top store in temp and top ko pop krna h 

    int temp = st.top();

    st.pop();

    reverseStack(st);

    insertAtBottom(st,temp);


}


int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    //before reverse
    // REVERSE : 10 20 30 40 

    // After reverse 
    reverseStack(st);

    cout<<" after REVERSE : ";
     while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}