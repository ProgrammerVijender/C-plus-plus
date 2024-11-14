#include <iostream>
using namespace std;
    
void findSubsequences(string str, string output ,int index)
{
    //base case
    if (index >= str.length())
    {
        cout << "--> " << output << endl;
        return;
    }
    
    char ch  = str[index];

    //include
    output.push_back(ch);
    findSubsequences(str, output,index+1);

    //exclude
    output.pop_back();
    findSubsequences(str, output,index+1);
    
}
int main()
{   string str = "abc";
    int index =0;
    string output = "";

    findSubsequences(str, output,index);
    return 0;
} 
/*
              a         " "
            ab  


*/  
