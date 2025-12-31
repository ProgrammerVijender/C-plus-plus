
#include <iostream>
#include <queue>
using namespace std;
    
class Info{
    public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int a , int b , int c){
        this -> data = a;
        this -> rowIndex = b;
        this -> colIndex = c;
    }
};

class compare{
    public:
    bool operator()(Info* a , Info* b){
        return a -> data > b -> data;
    }
};  



void mergeKsortedArrays(int arr[][4], int n, int k, vector<int> &ans) {

    priority_queue<Info*, vector<Info*>,compare> pq;

    for (int row = 0; row < k; row++)
    {
        int element = arr[row][0];

        Info* temp = new Info(element,row,0);
        pq.push(temp);

    }
    
    while(!pq.empty())
    {
        
    Info* temp = pq.top(); // babbar ne pq.front() use kiya tha but error ki wajah se hum pq.top() use krre
        pq.pop();

        int topData = temp -> data;
        int topRow = temp -> rowIndex;
        int topCol = temp -> colIndex;

        // value store 
        ans.push_back(topData);

        // next element fetch from the same row
        if(topCol +1 < n)
        {
            Info* newInfo = new Info(arr[topRow][topCol+1] ,topRow , topCol+1);
            pq.push(newInfo);
        }
    }

    
}


int main()
{
    int arr[3][4] = {
        {1, 4, 8, 11},
        {2, 3, 6, 10},
        {5, 7, 12, 14}
    };

    int n = 4;
    int k = 3;


    vector<int> ans;
    mergeKsortedArrays(arr, n, k, ans);

    cout<<" Printing Ans array :" << endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;



    return 0;
}