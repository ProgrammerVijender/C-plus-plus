#include <iostream>
#include <string>
using namespace std;

int maxpalindrome(int mid,string s)
    {
        int i=mid,j=mid,count = -1;
        while( s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }

int main()
{
    // shortestPalindrome()

    int count=0;
        string t="assassa";
        count = maxpalindrome(3,t);
        cout<<count;
    return 0;
}

    
