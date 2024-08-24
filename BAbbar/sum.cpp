#include<iostream>
// #include<vector>
#include<limits.h>

using namespace std;

void printarray(int arr[][4] ,int row, int col )
{
    for (int i = 0; i < row; i++)
    {
    int sum=0;
      for (int j = 0; j < col; j++)
      {
        sum+= arr[i][j];
      }
      
      cout<<"sum is : "<<sum<<endl;
    }
}
int main(){
    int row, col;   
    int arr[3][4] = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,1,11}
  };
    printarray(arr,3,4);
    return 0;
}