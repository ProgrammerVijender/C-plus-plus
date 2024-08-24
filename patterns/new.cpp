#include <iostream>
using namespace std;
int main() {

   int row, n = 5;

   for (row = 0; row < 6; row++) {
    

     for(int space=0; space<n; space++)
     {
       cout<<" ";
     }

      for(int k=0; k=2*row+1; k++)
      {
        cout<<"*";
      }

     for(int space=0; space<n; space++)
     {
       cout<<" ";
     }

     cout << endl;
    n=n-1;

   }

  return 0;
}