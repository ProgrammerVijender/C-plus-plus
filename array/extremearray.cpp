#include<iostream>
using namespace std;

void extreme(int arr[], int size) {
    int left=0,right=size-1;
    for (int i = 0; i < size; i++)
    {   if (/* condition */)
    {
        /* code */
    
    
        if (left<right)
        {
            cout<<arr[left]<<" "<<arr[right]<<" ";

        left++;
        right--;
        }

    }
        // cout<<endl;
    }
    
}

int main(){
    int arr[7] = {10,70,20,30,40,50,60};
    int size = 7;


    extreme(arr , size);
    return 0;
}