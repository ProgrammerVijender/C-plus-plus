#include <iostream>
using namespace std;

int pow(int n)
{   
    if(n == 0)
    return 1;

    int v = 2 * pow(n-1);
    return v;
}

int main()
{   
    // int v;
    

    cout<<pow(5);
}