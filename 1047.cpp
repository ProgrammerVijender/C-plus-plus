#include<iostream>
#include<string.h>
using namespace std;

    string removeDuplicates(string s) {
        int n = s.length();
        string ans="";

        for(int i=0; i<n; i++)
        {
            if(  ans.length() > 0 && s[i] == ans[ans.length()-1] )
            {
                ans.pop_back();
            }

            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }

int main()
{
    string s = "azxxzy";

    

    cout<< " output is "<<removeDuplicates(s);

    return 0;
}
