#include <iostream>
#include <vector>
using namespace std;
int bsearch(int arr[], int n);


// int bubblesort(vector<int> &v)
// {
    
// }
 
int print()
{   int n = 8;
 vector <int> v;
    for(int i=0; i<n; i++)
    {
        cout<<"vector "<<i<<" is : "<<v[i];
    }
    // return 0;
}

int main() {
  
  vector <int> v = {10,4,6,8,7,3,2,1};
  int n = 8;
//   cout<<"n value is : "<<n<<endl;

//   int found = bsearch(arr,n); 
//   cout<<"found value is : "<<arr[found]<<endl;
print(v);
  return 0;
} 