#include<iostream>
using namespace std;

void mergesort(int arr, int lb ,int ub)
{
    if (lb<ub)
    {
        int mid=(lb + ub) / 2;
        mergesort(arr,lb,mid);
        mergesort( arr ,mid+1 , ub);

        merge(arr,lb,mid,ub);
    }
}
void merge(int arr,int lb,int mid,int ub)
{   int n,b[n];
    int i = lb;
    int j = mid +1;
    int k = lb;

    while (i<=mid && j<= ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]= arr[i];
            i++; k++;
        }

        else{
            b[k]= arr[j];
            j++;
        }
        k++;
    }
    
    if(i>mid)
    {
        
    }
    
}




int main(){
    int  n;
    int arr[n];

   for (int i = 0; i < n; i++)
    {   cout<<"Enter The value of array : ";
        cin>>arr[i];
    }

return 0;
}



