#include<iostream>
using namespace std;

int main(){
    int n;
    char arr[n];

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"enter "<<i <<" element : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {   
        char temp;

        if (i > n)
        {
            break;
        }

        else{
            temp=arr[i];
            arr[i] = arr[n];
             arr[n] = temp;
        }
        n=n - 1;
    }
        cout<< " reversed array is : ";
        for (int i = 0; i < n; i++)
    {   
        cout<<arr[i];
    }


    return 0;
}