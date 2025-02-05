// 01. creation of BST and Insertion in BST
// 02. Searching in BST
// 03. Searching max value in BST
// 04. Searching min value in BST

#include<iostream>
#include<queue>
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

Node* insertIntoBST(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    
    // if it is node first node
    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
    }
    else{

        root->left = insertIntoBST(root->left, data);
    }

    return root; 
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data << " ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

void PreOrder(Node* root)
{
    if(root == NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node* root)
{
    if(root == NULL)
        return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);

}

void PostOrder(Node* root)
{
    if(root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

Node* minValue(Node* root){

    if(root == NULL)
    {
        cout<<"NO MIN VALUE"<<endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node* maxValue(Node* root){

    if(root == NULL)
    {
        cout<<"NO MAX VALUE"<<endl;
        return NULL;
    }
    Node* temp = root;

    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

bool SearchInBST(Node* root, int target)
{
    if(root == NULL)
        return false;

    if(root->data == target)
    {
        return true;
    }

    bool leftAns = false;
    bool rightAns = false;

    if(target > root->data)
    {
        leftAns = SearchInBST(root->right, target);
    }
    else
    {
        rightAns = SearchInBST(root->left, target);
    }

    return leftAns || rightAns;
}

void createBST(Node* &root){
    cout << "Enter data : "<< endl;
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertIntoBST(root,data);
        cin >> data;
    }
}

// 50 30 60 25 40 70 80 55      iske baad -1 type krke enter

int main(){

    Node* root = NULL;
    createBST(root);

    // level wise print
    levelOrderTraversal(root);

    // InOrder of BST is always sorted in Ascending order
    cout<< "InOrder : ";
    InOrder(root);
    cout<< endl;

    cout<< "PreOrder : ";
    PreOrder(root);
    cout<< endl;

    cout<< "PostOrder : ";
    PostOrder(root);
    
    
    // min nikaal rhe h isme BST ka
    cout<< endl;
    Node* minNode = minValue(root);
    if(minNode == NULL)
    {
        cout<<"There is no node in tree, so no min value"<<endl;
    }
    else
    {
    cout<<" MIN value of BST is : "<< minNode->data<<endl;
    }

    // Max value nikaal rhe h isme BST ka

    cout<< endl;
    Node* maxNode = maxValue(root);
    if(minNode == NULL)
    {
        cout<<"There is no node in tree, so no max value"<<endl;
    }
    else
    {
    cout<<" MAX value of BST is : "<< maxNode->data<<endl;
    }

    cout<< endl;

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    // target bar bar puchhega uske rokne ke liye -1 enter krnaa hogaa 
    while(target != -1)
    {
        bool ans = SearchInBST(root, target);
        if(ans == true)
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
        
        cout<<"Enter the target : ";
        cin>>target;
    }

    
    
    return 0;
}