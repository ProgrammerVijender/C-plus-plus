#include <iostream>
#include <stack>
using namespace std;

int solve(stack<int> &st , int pos)
{
    //Base Case
    if(pos ==1)
    {
         int middle = st.top();
        // st.pop(); // Remove the middle element
        return middle;
    }

    // 1 Case smbhaalna h
    // cout<<"maine test ke liye check kiya : "<<
    pos--;
    int temp = st.top();
    st.pop();

     int middle = solve(st,pos);

    st.push(temp);

    return middle;
}

int getmiddleElement(stack<int> &st) 
{
    int size = st.size(); 
    if(st.empty())
    return -1;
    else{

        //Stack is not empty
        

        int pos = 0;
        if(size & 1)
        {   
            //odd 
            pos = size/2 +1;
        }
        else{
            //even
            pos = size/2;
        }

        int ans = solve(st,pos);
        return ans;
    }
}
int main()
{
    stack <int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // st.push(50);
    // st.push(60);

    int mid = getmiddleElement(st);
    cout << "mid element is : "  << mid<<endl;

    cout<< "size of stack is : "<<st.size();

    
    return 0;
}