#include<iostream>
using namespace std;
int main(){
    
    // *****    I<N  J=N , J
    // *  *
    // * *
    // ** 
    // * 
    
    int n;

    
    cout<<"n daalo :";  
    cin>>n;


    for(int i=0; i<n; i++)
    {
        for(int i=0; i<n; i++)
    {
        cout<<"*";
    }
        n=n-1;
    cout<<endl;
    }


return 0;
}