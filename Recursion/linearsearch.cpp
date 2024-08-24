#include <iostream>
using namespace std;
bool searching(int arr[], int size , int index, int target)
{
    //base case
    if(index >= size)
    {
        return false;
    }

    //processing
    if(arr[index] == target)
    return true;

    //recursive call
     bool ans  = searching( arr,  size ,  index+1,  target);
    return ans;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size =5,index = 0;
    int target = 50;

    cout<<"target found or not? : "<<searching( arr,size, index,target);

    return 0;
}