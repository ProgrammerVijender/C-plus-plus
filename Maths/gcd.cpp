#include<iostream>

using namespace std;

int gcd(int a , int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    cout<<gcd(18,6)<<endl;
    cout<<gcd(6,10)<<endl;
    cout<<gcd(10,3)<<endl;
}