#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(10);

    cout << endl<< "size of queue: " << q.size() << endl;
 
    q.pop();

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }



    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element of queue: "<<q.front() << endl;
    cout <<"Last element of queue: "<< q.back() << endl;

    return 0;
}