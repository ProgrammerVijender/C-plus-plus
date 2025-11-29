// gfg problem :- Union_of_Two_Linked_Lists

class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set <int> mp;
        
         Node* temp = head1;
        while(temp != NULL)
        {
            mp.insert(temp->data);
            temp = temp->next;
        }
        
       temp = head2;
        while(temp != NULL)
        {
            mp.insert(temp->data);
            temp = temp->next;
        }
        
         Node* head = NULL;
         Node* tail = NULL;
         
        for(auto& i:mp)
        {
            Node* newNode = new Node(i);
            
            if(head == NULL)
            {
                head  = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};