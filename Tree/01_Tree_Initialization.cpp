// 1. Create tree and pre-order , in-order , Post-order
// 2. BFS Traversal wihout NULL marker , 
// 3. BFS Traversal with NULL Marker

// BFS Traversal => level wise traversal 
#include <iostream>
#include <queue>
using namespace std;
    
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }


};

    // it returns root node of the created tree
    Node* createTree(){
        cout<<"enter the value: "<<endl;
        int data;
        cin>>data;

        if(data == -1)
        {
            return NULL;
        }

        //Step 1: Create Node
        Node* root = new Node(data);

        //Step 2: Create left subtree
         cout<<"left of Node : " << root->data << endl;
        root->left = createTree();

        //Step 3: Create right subtree
         cout<<"right of Node : " << root->data << endl;
        root->right = createTree();

        return root;
    }

    // preorderTraversal
    void preorderTraversal(Node* root)
    {
        if(root == NULL)
        {
            return;
        }

        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

    // inorderTraversal
    void inorderTraversal(Node* root)
    {
        //LNR

        // base case
        if(root == NULL)
        {
            return;
        }
        // L
        inorderTraversal(root->left);

        // N
        cout<<root->data<<" ";

        // R
        inorderTraversal(root->right);
    }

    // postorderTraversal
    void postorderTraversal(Node* root)
    {
        //LRN

        // base case
        if(root == NULL)
        {
            return;
        }
        // L
        postorderTraversal(root->left);

        // R
        postorderTraversal(root->right);

        // N
        cout<<root->data<<" ";

    }


    // BFS Traversal in single line
    /* void BFStraversal(Node *root)
    {
        queue <Node*> q;
        q.push(root);

        while(!q.empty())
        {
            
            Node *temp = q.front();
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

    } */

    // BFS Traversal wihout marker
    /*
    void BFStraversal(Node *root)
    {
        queue <Node*> q;
        q.push(root);

        while(!q.empty())
        {
            if(q.front() == NULL)
            {
                cout<<endl;
                q.push(NULL);
            }
            
            Node *temp = q.front();
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    } 
    */

   // BFS Traversal with marker

    void BFStraversal(Node *root)
    {
        queue <Node*> q;
        q.push(root);

        while( q.size() > 1)
        {
            Node *temp = q.front();
            q.pop();
            
            if(q.front() == NULL)
            {
                cout<<endl;
                q.push(NULL);
            }
            
            else{
                cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            }
        }
    }



    // */10 20 40 50 30 60 70 
// inorder : 40 20 50 10 60 30 70 
// postorder : 40 50 20 60 70 30 10 
// BFS : 10 20 30 40 50 60 70 

int main()
{
    Node* root = createTree();
    //cout << root->data << endl;
    preorderTraversal(root);
    cout<<endl;

    cout<< "inorder : ";
    inorderTraversal(root);
    cout<<endl;

    cout<< "postorder : ";
    postorderTraversal(root);
    cout<<endl;
    
    cout<< "BFS : ";
    BFStraversal(root);
    cout<<endl;

    return 0;
}


// 10 20 40 -1 -1 50 -1 -1 30 -1 -1 60 -1 -1 70 -1 -1