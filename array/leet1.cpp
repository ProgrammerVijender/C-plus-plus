#include<iostream>
using namespace std;

int main(){
    int n , arr[n],duplicate,extra;

    cin>>n;

    for(int i=0; i<n; i++)
    {   cout<<"array index "<<i<<" : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        extra = arr[i];

        for (int j = 0; j < n; j++)
        {
            if (extra== arr[j])
            {
                duplicate = arr[j];
            }

            else{
                break;
            }
        }
        
        cout<<"duplicate number is : "<<duplicate;
    }
    
    return 0;
}