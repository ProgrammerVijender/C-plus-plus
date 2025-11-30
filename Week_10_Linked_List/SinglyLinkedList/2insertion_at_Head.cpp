#include <iostream>
using namespace std;
    
class Node{
public:
    int data;
    Node* next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node* &head ,Node* &tail, int data)
{
    if(head == NULL)
    {
        // empty LL

         // STEP 1 = create a node
        Node* newNode = new Node(data);

        // STEP 2 = update head
        head = newNode;
        tail = newNode;
    }

    else
    {
        // STEP 1 = create a node
        Node* newNode = new Node(data);
    
        // STEP 2 = attach new node to head node
        newNode->next = head;
    
        // STEP 3 = UPDATE HEAD
        head = newNode;
    }
}

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

int main()
{   // INSERT NODES
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // LINK NODES
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // DEFINE HEAD
    Node* head = first;
    Node* tail = fifth;

    // pass by reference is used here 
    insertAthead(head,tail,500);
    printLL(head);

    return 0;
}