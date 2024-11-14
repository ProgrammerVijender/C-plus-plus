#include <iostream>
using namespace std;


void printrecursive(int v)
{
    //base case 
    if( v == 1)
    {
        
        // cout<<v<<"  Loop end ";
        return;
    }
    v--;
    printrecursive(v);
    cout<<v<<endl;
    //recursive 
}
int main()
{
    int value = 10;

    printrecursive(value);

    return 0;
}