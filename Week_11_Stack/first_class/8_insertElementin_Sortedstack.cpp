// new element ko sabse niche push krna h using recursion

#include <iostream>
#include<stack>

using namespace std;

void insertElement(stack<int> &st,int element)
{
    //base case
    if(st.empty() || element>st.top() )
    {
        st.push(element);
        return;
    }

    //top store in temp and top ko pop krna h 

    int temp = st.top();

    st.pop();

    insertElement(st,element);

    st.push(temp);


}


int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    insertElement(st,25);

     while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}