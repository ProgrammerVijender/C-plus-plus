#include<iostream>
using namespace std;

void sumtarget(int arr[],int target)
{ 
    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j < sizeof(arr); j++)
    {
       if (arr[i]+arr[j]==target)
       {
        cout<<i<<","<<j;
        return;
       }
        
    }
    }

    cout << "No pair found with the given target sum.";
}


int main(){

    int arr[4]={2,7,11,15};
    int target=9;
    sumtarget(arr,target);

return 0;
}