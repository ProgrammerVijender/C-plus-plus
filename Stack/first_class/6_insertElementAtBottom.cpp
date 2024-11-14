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

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // pushing 400 in bottom
    insertAtBottom(st,400);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}