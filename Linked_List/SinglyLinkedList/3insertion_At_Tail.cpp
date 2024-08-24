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

void insertAtTail(Node* &head , Node* &tail , int data )
{
    if(tail == NULL)
    {
        // empty LL

        // STEP 1 = create a node
        Node* newNode = new Node(data);

        // STEP 2 = update Tail
        head = newNode;
        tail = newNode;
    }

    else{
        // STEP 1 = create a node
        Node* newNode = new Node(data);

        // STEP 2 = attach new node to Tail node
        tail->next = newNode;

        // STEP 3 = update Tail
        tail = newNode;

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
    cout<<"NULL";
}

int main()
{   // INSERT NODES
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

    // LINK NODES
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // DEFINE HEAD
    // Node* head = first;
    // Node* tail = fifth;


    // IF HEAD AND TAIL ARE NULL
    Node* head = NULL;
    Node* tail = NULL;


    // pass by reference is used here 
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);

    

    //PRINT ALL ELEMENTS OF LINKED LIST
    printLL(head);


    return 0;
}