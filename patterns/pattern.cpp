#include<iostream>
// #include<conio.h>

using namespace std;

int main() {
    int count,n=1;
    cout<<"enter the count :";
    cin>>count;
    
    for (int i = 0; i < count; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            /* code */
            cout<<"*";

        }
        n++;
        cout<<endl;
    }
     



    return 0;
}