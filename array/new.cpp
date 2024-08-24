#include<iostream>
using namespace std;
int main(){

    int sum=0,n,arr[n];

    cin>>n;
    for(int i=0; i<n; i++ )
    {
        cout<<"enter values: ";
        cin>>arr[i];
        sum=sum+arr[i];
        // cout<<"\n sum is : "<<sum;

    }


    cout<<"\n sum is : "<<sum;

    
    return 0;
}