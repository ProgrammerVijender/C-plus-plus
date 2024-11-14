#include <iostream>
#include <string>
#include <stack>

using namespace std;
    
    /* int maxLength(string& str) {
        stack <char> st;
        int count = 0;

        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '(')
            {
                st.push(str[i]);
            }

            else if(str[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
                count +=2;
            }
        }
        return count;
    }
*/
    
   /* int maxLength2(string& str) {
        int openB = 0;
        int closeB = 0;
        int ans =0;
        int maxans=0;
        for(char i:str)
        {
            if(i == '(')
            {
                openB++;
            }

            else if(i == ')')
            {
                closeB++;
            }
            if(closeB > openB)
            {
                maxans = std::max(ans,maxans);
                openB = 0;
                closeB = 0;
                ans = 0;
            }
    
        }
        if(openB >= closeB)
        {
            ans = closeB;
        }
        else
        {
            ans = openB;
        }
        return ans*2;

    }
*/
 int maxLength2(string& str) {
        int openB = 0;
        int closeB = 0;
        int ans =0;
        int maxans=0;
        for (int i = 0; i < str.length(); ++i) {
        char currentChar = str[i];

        if (currentChar == '(') {
            openB++;
        } else if (currentChar == ')') {
            closeB++;
        }

            if(closeB > openB)
            {
                maxans = std::max(ans,maxans);
                openB = 0;
                closeB = 0;
                ans = 0;
            }
            else // when the substring is still valid
            {
                ans = max(ans,closeB*2); // update the current valid substring length
            }
    
        }
        if(openB >= closeB)
        {
            ans = closeB;
        }
        else
        {
            ans = openB;
        }
        return max(ans*2,maxans); // return the maximum of all valid substring lengths

    }
int main()
{
    string s = "()()))())))))(())())))()))))()((()(((((((()(()()))()(()())))((()((((((()))))()(())(((((())((((((((()))((())()(()())()(()(()(()))))))))))))))()()((()((())))())()(())(()(()(()(()))))(()()((()(((()())))(()()())((())((((()()()()())()()()()))))(()()(()()((()(()))))))(())()(()))((())(()()()((())((((((()()))(()()()(()((())()()((((((())(((((())(((())))((((()()))()(())(())()))(()(())(((()(()())())(()())()((()()(()(()()()())((((()((()(()(((((())((()(((())(()()(())))))))))(()())((())()((()()()()()))))(((()))(()()())(()))()()))()))))()))))((())((())((()((())()))(()()))))(()))()))()()))))()(())()((())(()())()()()()()))()))()((((((()))))()())))))(()()(()())()((()(((()()))((()((()()(()()()()((())(())(()))())((()())))))())())()()(()())((())(((())(())(((()())()()(()(((())())()()(((()(()))())()()()((())((()()((((((((()()((()(((())()())))()()(()((()(())))))()((()))(()((()(())((()(())((((((";
    cout<<"Ans = "<<maxLength2(s)<<endl;
    
    return 0;
}