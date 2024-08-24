#include<iostream>
using namespace std;

    void printArray(int arr[], int size){
        for(int i=0; i<size ;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool linearsearch(int arr[],int size,int target){
        for(int i=0; i<size; i++)
        {
            if (arr[i] == target)
            {
                return true;
            }
            
        }

        return false;
    }

int main(){

    //int i,linear=5,n=5 , 
    int  arr[5]= {1,2,3,4,5};
    int size = 5;
    int target=4;

    bool ans = linearsearch(arr,size,target);

    if (ans == 1)
    {
        cout<<"target found";
    }
    
    else
    {
        cout<<"target not found";
    }

    return 0;
}