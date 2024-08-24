#include <iostream>
using namespace std;

int bsearch(int arr[], int s, int e , int target)
{   
    int mid =  s + (e - s)/2 ;

    if (arr[mid] == target )
    {
        return mid;
    }

    else if (arr[mid] > target)
    {
        e  = mid - 1;
        return bsearch(arr,s,e , target);
    }

    else
    {
        s = mid +1;
        return bsearch(arr,s,e , target);
    }
    
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int e = 7;
    int s = 0;
    int target = 80;

    cout << "index of target is : " << bsearch(arr,s,e , target) << endl;
    return 0;
}