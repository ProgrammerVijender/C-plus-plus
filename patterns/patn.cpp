#include <iostream>
using namespace std;
int main() {

   int row, n = 5;

   for (row = 0; row < n; row++) {
    

     for(int col=0; col<n - row - 1; col++)
     {
       cout<<" ";
     }

      for(int col=0; col<row+1; col++)
     {
       cout<<"* ";
     }
     
     cout << endl;
   }
  return 0;
}