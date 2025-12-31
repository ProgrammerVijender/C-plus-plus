#include <iostream>
#include <queue>
using namespace std;
    
int main()
{
    // create max-heap
    priority_queue <int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout<<"Top element is "<< pq.top()<< endl;
    pq.pop(); 

    cout<<"Top element is "<< pq.top()<< endl;

    cout<< "Size of heap is "<< pq.size()<<endl;

    if(pq.empty())
    {
        cout<< "Empty" << endl;
    }

    else{
        cout<<"not Empty"<<endl;
    }
    
    return 0;
}