
#include <iostream>
using namespace std;
int bsearch(int arr, int n);
int main() {
  
  int arr[] = {10,10,2,2,3,3,4,5,5,8,8,7,7,6,6,9,9};
  int n = 17;
  cout<<"n value is : "<<n<<endl;

  int found = int bsearch(arr,n); 
  cout<<"found value is : "<<arr[found]<<endl;

  return 0;
} 


int bsearch(int arr, int n)
{
    int s=0,e=n-1;
    int mid= s+(e-s)/2;

    while(s<=e)
    {
      if(s == e)
      {
        return s;
      }
      
      if(mid & 1)
      { // odd

        if(arr[mid -1] == arr[mid])
        s = mid+1;

        else
        e=mid-1;

      }

      else{
        if(arr[mid] == arr[mid+1])
        s=mid+2;

        else
        e=mid;
      }
      mid= s+(e-s)/2;
    }

  return -1;
}

