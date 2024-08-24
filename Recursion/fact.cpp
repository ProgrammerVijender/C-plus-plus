#include <iostream>
using namespace std;

int fact(int n)
{   
    if (n == 1)
    {
        return 1;
    }
    
    int f = n * fact(n - 1);

    return f;
}
int main(){
    // int fact;
    int n =5;
    int t = fact(5);
    cout<<t;
}