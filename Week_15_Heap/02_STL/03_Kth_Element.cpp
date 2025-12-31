#include <iostream>
#include<queue>

using namespace std;

int getKthSmallestElement(int arr[], int n, int k){
    
    priority_queue<int > pq;

    // first k elements ko process kro
    for(int i = 0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }

    // Remaining insert karenge jo arr me chhote honge 
    for(int i = k; i<n; i++){
        int element = arr[i];
        if(element < pq.top())
        {   pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int getKthGreatestElement(int arr[], int n, int k){
    
    priority_queue<int, vector<int>, greater<int> > pq;

    // first k elements ko process kro
    for(int i = 0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }

    // Remaining insert karenge jo arr me chhote honge 
    for(int i = k; i<n; i++){
        int element = arr[i];
        if(element  > pq.top())
        {   pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}


int main()
{
    // cout << "Hello, World!" << endl;

    // int arr[] = {3,5,4,6,9,8,7};
    // int n = 7;
    // int k = 4;

    // cout<<" Kth smallest element is "<< getKthSmallestElement(arr,n,k)<<endl;


    // Greatest ke liye
    int arr[] = {3,5,4,6,9,8,7};
    int n = 7;
    int k = 3;

    cout<<" Kth Greatest element is "<< getKthGreatestElement(arr,n,k)<<endl;

    return 0;
}