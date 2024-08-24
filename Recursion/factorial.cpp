#include <iostream>
using namespace std;

int fact(int n)
{   
    if(n == 1 || n==0)
    return 1;

    int recursionfact = fact(n-1);
    int finalfact = n * recursionfact;

    return finalfact;

}

int main()
{   int n=5;
cout<<"factorial of 5 is "<<fact(5);
return 0;
}