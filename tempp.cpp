#include <iostream>
#include <vector>
#include <string>
using namespace std;
    
class Solution {
public:
    string v = "";
    void push(string s, int start,int e)
    {
        for(int i=start; i<=e; i++)
        {
            v += s[i];
        }
        v.push_back(' ');
        
    }

    string reverseWords(string s) {
        int end = s.length()-1;

        for(int i=s.length()-1; i>=0; i--)
        {
            
            if(s[i] == ' ' && s[i-1] !=  ' ' && s[i+1] != ' ' &&  i !=0)
            {
                push(s,i+1, end );

                if(s[i+1] != ' ')
                {
                    end = i -1;
                }
            }

            if(s[i] == ' ' && s[i-1] ==  ' ' && i>0 )
                {
                    s[i] = '$';
                }
            



            if( i == 0)
            {
                push(s,i, end);
            }
            
        }
        
        if(v[0] == ' ')
        {
            v.erase(0,1);
        }
        // cout<<v[v.size()-1];
        if(v[v.size()-1] == ' ')
        {
            v.erase(v.size()-1,1);
        }

        cout<<"["<<v<<"]"<<endl;

        int count = 0;

        for(int i=0; i<v.length()-1; i++)
        {   
            if(v[i] == ' ' && count < 1 );
            {   cout<<" hoho";
                count++;
                // {   cout<<"v[i] : "<<v[i]<<endl;
            //     v.erase(i ,1 );
            }

            if(count == 1 && v[i] == ' ' )
            {   cout<<"two";
                v.erase(i ,1 );

            }
        }

        return v;
    }
};



int main()
{   string s = "blue is sky the";
    string reverseWords(string s);
    
    
    

    return 0;
}