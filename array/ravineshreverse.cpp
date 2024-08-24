#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];

    

    for(int i=0; i<n; i++)
    {
        cout<<"enter "<<i <<" element : ";
        cin>>arr[i];
    }

        cout<< " reversed array is : ";
        for (int i = n-1; i >= 0; i--)
    {   
        cout<<arr[i];
    }


    return 0;
}