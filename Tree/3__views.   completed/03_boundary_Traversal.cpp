// boundary traversal ke liye : 3 kaam krne hote h :-
//    boundary traversal:-  1. left nodes Traversal
//                          2. child nodes Traversal
//                          3. right nodes Traversal




#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

// 1. left Traverse
void PrintLeftNodes(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    
    if(root->left != NULL)
    {
        PrintLeftNodes(root->left);
    }
    else 
    {
        PrintLeftNodes(root->right);
    }
}

// 2 leaf node Traverse
void PrintLeafNodes(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    if(root->left == NULL && root->right == NULL)
    {
        cout<<root->data<<" ";
    }

    PrintLeafNodes(root->left);
    PrintLeafNodes(root->right);
}


// 3 right Traverse
void PrintRightNodes(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    // cout<<root->data<<" ";

    if(root->left == NULL && root->right == NULL)
    {
        return;
    }
    
    if(root->right != NULL)
    {
        PrintRightNodes(root->right);
    }
    else 
    {
        PrintRightNodes(root->left);
    }
        cout<<root->data<<" ";


}

void BoundaryTraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<< root -> data << " ";
    PrintLeftNodes(root->left);
    PrintLeafNodes(root);
    PrintRightNodes(root->right);

    /*   // left Traverse
    PrintLeftNodes(root);

    // leaf Traverse
    PrintLeafNodes(root);

    // for handling double print of root node in starting and ending
    if(root->right != NULL)
    {
        PrintRightNodes(root->right);
    }
    else 
    {
        PrintRightNodes(root->left);
    }
    */
}

int main()
{   
    Node* root = createTree();
    
    cout<<endl;
    
//    printTopView(root);
//    printBottomView(root);
   
    BoundaryTraversal(root);

    return 0;
}

// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
// enter the value: 

// 10 20 40 110 111 80 112 113 90 60 30 %