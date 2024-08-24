#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target)
{
    int start=0 , end = n-1;
    int mid = (start + end ) / 2;

    while (start <= end )
    {
        if(arr[mid] == target)
        {
            return mid;
        }

        else if(arr[mid] > target)  {
            end = mid - 1;
        }

        else if(arr[mid] < target)  {
            start = mid + 1;
        }
         mid = (start + end ) / 2;
    }
    return -1;
}

int main(){
        int arr[10]= {1,2,3,4,5,6,7,8,9,0};
        int size=10 ;
        int target = 8;
        
        int mid = binarysearch(arr,size,target);
        cout<<"founded number is : "<<mid;
        
}