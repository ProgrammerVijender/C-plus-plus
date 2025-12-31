#include <iostream>
#include <queue>
using namespace std;
    
int main()
{
    // min heap
    priority_queue<int, vector <int> , greater<int> > pq;


    // insertion
    pq.push(10);
    pq.push(20);
    pq.push(15);
    

    cout<< "Top element of heap is "<< pq.top() <<endl;
    pq.pop();

    cout<< "Top element of heap is "<< pq.top() <<endl;

    cout<< "Size : "<<pq.size() <<endl;

    if(pq.empty())
    {
        cout<< "Empty" <<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }

    return 0;
}