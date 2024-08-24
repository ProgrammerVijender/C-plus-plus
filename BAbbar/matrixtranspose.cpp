#include<iostream>
#include<limits.h>
using namespace std;

void printarray(int arr[4][4],int row, int col)
{   int sum=0;
    for(int i = 0; i < row ; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[j][i] ,arr [i][j]);
        
        }

    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}


int main (){
    int row, col;   
    int arr[4][4] = {
  {1,2,3,4},
  {5,6,7,8},
  {5,6,7,8},
  {9,4,7,9}
  };

 printarray(arr,4,4);
}