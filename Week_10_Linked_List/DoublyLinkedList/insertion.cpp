#include <iostream>
using namespace std;


class Node
{
    public:
        int data;
        Node* prev;
        Node* next;
    
    Node()
    {
        this->prev = NULL;
       this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

void printLL(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
      cout<<temp->data<<"-->";
      temp = temp->next;
    }
    cout<<endl;
}

int findlength(Node* head)
{   int count = 0;

    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
    
}

void insertionAtHead(Node* &head, Node* &tail,int data)
{
    if (head == NULL)
    {
        Node* newNode  = new Node(data);
        // newNode->next =NULL;
        head = newNode;
        tail = newNode;
    }

    else{
        Node* newNode  = new Node(data);
        newNode->next =head;
        head->prev = newNode;
        head = newNode;
    }
    
}

void insertionAtTail(Node* &head, Node* &tail, int data)
{
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        // newNode->next = NULL;
        head = newNode;
        tail = newNode;
    }

    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->next = NULL;
        tail = newNode;
    }
    
}

void insertionAtPosition(Node* &head, Node* &tail, int data,int position)
{   
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }

    else
    {
        int len = findlength(head);
        if (position == 1)
        {
            insertionAtHead(head,tail, data);
        }

        else if(position == len+1)
        {
            insertionAtTail(head,tail, data);
        }
        
        else
        {    
           Node* newNode = new Node(data);
           Node* curr = head;
           Node* prev=NULL;

           while (position != 1)
           {
            position--;
            prev = curr;
            curr = curr->next;
           }

            prev->next = newNode;
            newNode->prev = prev;
            newNode->next = curr;
            curr->prev = newNode;
           

        }
    }
    

}


int main()
{
    

    // Node* one = new Node(10);
    // Node* two = new Node(20);
    // Node* three = new Node(30);
    // Node* four = new Node(40);

    // one->next = two;
    // two->next = three;
    // three->next = four;
    // four->next = NULL;

    // Node* head = one;
    // Node* tail = four;
    

    // cout<<findlength(head)<<endl;
    Node* head = NULL;
    Node* tail = NULL;

 insertionAtHead(head,tail, 15);
 insertionAtHead(head,tail, 20);
 insertionAtHead(head,tail, 30);
 insertionAtTail(head,tail, 40);


    printLL(head);
    insertionAtPosition(head,tail, 1000,5);
    printLL(head);


    return 0;
}