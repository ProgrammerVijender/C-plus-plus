#include<iostream>
using namespace std;

int unique(int arr[], int size){
    int ans  = 0;

    for(int i=0; i<size; i++)
    {
        ans = arr[i]^ans;
    }
    return ans ;
}
int main()
{


    int arr[] = {10,202,20,20,202,30,30};
    int n = 7;

    int finalans = unique(arr,n);

cout<<" final unique number : "<<finalans;


return 0;
}
