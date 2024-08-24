#include <iostream>
#include <vector>
using namespace std;

void print()
{

}
void bsort(vector <int>&v)
{
  int n = 8;

  for(int i=0; i<n; i++)
  {
    cout<<v[i]<<"  ";
  }
}
int main(){
    vector <int> v = {1,2,3,8,6,5,4,3};
    bsort(v);

    return 0;
}