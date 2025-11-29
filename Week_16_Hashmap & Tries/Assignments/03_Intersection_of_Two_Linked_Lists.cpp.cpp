// Intersection_of_Two_Linked_Lists.cpp



class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        
        map <int ,int> mp;
        Node* temp = head2;
        while(temp != NULL)
        {
            mp[temp->data]++;
            temp = temp->next;
        }
        
        Node* head = NULL;
        Node* tail = NULL;
        
        temp = head1;
        
         while(temp != NULL)
        {
           if(mp[temp->data] > 0 )
           {
               Node* newNode = new Node(temp->data);
               
               if(head == NULL)
               {
                   head = tail = newNode;
               }
               else
               {
                    tail->next = newNode;
                    tail = newNode;
                   
               }
               mp[temp->data]--;
           }
               temp = temp->next;
        }
      return head;  
    }
};
