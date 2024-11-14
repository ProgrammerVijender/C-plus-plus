// // // GFG PROBLEM minimumBracketReversal  OR Count the reversals

#include <string>
#include <stack>
#include <iostream>
using namespace std;

// Function prototype declaration
int countRev(string s);

int main()
{
    string s = "}{{}}{{{";
    int ans = countRev(s);
    cout << ans << endl;
    return 0;
}

int countRev(string s)
{
    if (s.length() % 2 != 0)
    {
        return -1;
    }

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    int ans = 0;
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();

        if (a == b)
        {
            ans++;
        }
        else
        {
            ans += 2;
        }
    }

    return ans;
}