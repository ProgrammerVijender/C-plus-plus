// left se tree view dekhenge toh jo elements dikhenge vo print krne h means hr level ka first element
// what is new in this code :- 1. leftview ka function

#include <iostream>
#include <queue>
#include <vector>
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

    // left view ka try code :- 
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    // left view : 10 20 40 70 110 % 

    // new funtion in this code
    void leftview(Node* root,int level ,vector <int>&levelview)
    {   
        //base
        if(!root)
        {
            return;
        }
        
        if(level == levelview.size())
        {
            levelview.push_back(root->data);
        }

        //left traverse
        leftview(root->left,level+1,levelview);
        leftview(root->right,level+1,levelview);
    }


    // left view ka try code :- 
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    // right view : 10 20 40 70 110 % 
    // new funtion in this code
    void rightview(Node* root,int level ,vector <int>&rightlevelview)
    {   
        //base
        if(!root)
        {
            return;
        }
        
        if(level == rightlevelview.size())
        {
            rightlevelview.push_back(root->data);
        }

        //left traverse
        rightview(root->right,level+1,rightlevelview);
        rightview(root->left,level+1,rightlevelview);
    }

    void levelwiseprint(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();

            if(temp == NULL)
            {
                cout<<endl;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else{
                
                cout<<temp->data<<" ";
                if(temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }

        }



    }


int main()
{   vector <int>levelview;
    Node* root = createTree();
    
    cout << "preorder Traversal : " ;
    preorderTraversal(root);
    cout<<endl;
    
    cout<<" left view : ";
    leftview(root,0,levelview);

    for(int i=0; i<levelview.size(); i++)
    {
        cout<<levelview[i]<<" ";
    }

     vector <int>rightlevelview;
     cout<<endl<<" rightview : ";
    rightview(root,0,rightlevelview);
    for(int i=0; i<rightlevelview.size(); i++)
    {
        cout<<rightlevelview[i]<<" ";
    }

    cout<<endl<<"level wise Print : ";
    levelwiseprint(root);

    return 0;
}

// 10 7 9 8 5 4 2 3 1 6 
// inorder : 9 7 8 5 4 3 2 1 10 6 
// postorder : 9 3 1 2 4 5 8 7 6 10     