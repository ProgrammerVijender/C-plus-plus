#include <iostream>
#include <stack>
using namespace std;

bool checkRedundentBrackets(string str)
{
    stack<char> st;

    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') 
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
           
            int  OperatorCount =0;

            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();

                if(temp == '+' || temp == '-' || temp == '*' || temp == '/')
                {
                    OperatorCount++;
                }
                st.pop();
            }
            
            st.pop();

            if(OperatorCount == 0)
            {
                return true;
            }
            
            }
    }
    return false;
}

int main()
{
    string str = "((a+b)*(c+d))";

    bool ans = checkRedundentBrackets(str);

    if(ans == true)
    {
        cout<<endl<<"Redundant brackets Present"<<endl;
    }
    else
    {
        cout<<endl<<"No Redundant brackets Present"<<endl;
    }

    return 0;
}