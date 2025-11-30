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

    ~Node()
    {
       cout<< "Destructor called for: " << this->data << endl;
    }
};

// Find length of LinkedList
int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

// deletion by position 
void deletionByPosition(Node* &head , Node* &tail, int position )
{
    if(head == NULL)
    {
        cout<<"head IS NULL";
        return;
    }

    // use for handle rare case 
    if(head == tail)
    {
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }


    int len = findLength(head);


    
    if(position == 1)
    {
        //first node delete kro

        //
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }

    else if(position == len)
    {
        // last node delete kro , delete Tail

        // delete tail;

        Node* prev = head;

        while (prev->next != tail)
        {
            prev = prev->next;
        }
        
        // set prevous next is NULL
        prev -> next = NULL;

        // del tail
        delete tail;

        // Update tail
        tail = prev;
    }

    else{
        Node* prev = NULL; 
        Node* curr = head; 

        // prev = head;
        
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }
        // STEP 2 : link prev ka next to the curr ka next
        prev->next = curr->next;

        //STEP 3: current ko disconnect kro
        curr->next = NULL;

        // delete the current node
        delete curr;
        
    }
}

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
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // LINK NODES
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // DEFINE HEAD
    Node* head = first;
    Node* tail = first;

    // pass by reference is used here 
    // insertAthead(head,tail,500);

    printLL(head);
    deletionByPosition(head,tail,1);
    
    //check tail element after single element deletion , important case tail lost after Linkedlist is Null.
    if(head==NULL)
    {
        cout<<"head is null"<<endl;
    }

    if(tail==NULL)
    {
        cout<<"taill is null";
    }


    return 0;
}