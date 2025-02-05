// Deletion in BST :-

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

// 50 30 60 25 40 70 80 55 -1      last me -1 se stop no jayega means null 
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()) q.push(NULL);
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


Node* deleteFromBST(Node* root, int target){

    // target dhoondh kr delete krdo

    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == target)
    {
        // 4 Cases bannenge delete krne ke

        // 1st case for leaf node
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // case 2 :-  left not null and right == Null
        else if(root->left != NULL && root->right == NULL)
        {
            Node* childSubTree = root->left;
            delete root;
            return childSubTree;
        }

        // case 3 :-  left null and right not Null
        else if(root->left == NULL && root->right != NULL)
        {
            Node* childSubTree = root->right;
            delete root;
            return childSubTree;
        }

        // case 4 :- isme dono hi nodes not null h

        // isko karne ke 2 tarike h :- 
        // 1. ya toh left nodes se max value leke usko root me update krke max value wali node delete krdo 
        // 2. ya fir right nodes se min value leke usko root me update krke min value wali node delete krdo 
        else
        {   
            // left nodes me se max value ki node ko maxi me dalenge
            Node* maxi = maxValue(root->left);
            
            // root ki value me copy krdiya maxi ki value
            root->data = maxi->data;

            // left node se traverse krayenge max value ki node delete ke
            root->left = deleteFromBST(root->left, root->data);
            return root;
        }

    }

    else if(root->data > target)
    {
        root->left = deleteFromBST(root->left, target);
    }
    else
    {
        // 
        root->right =  deleteFromBST(root->right, target);
    }

    return root;
}


int main(){

    Node* root = NULL;
    createBST(root);

    cout << "\nLevel Order Traversal of BST:\n";
    if (root) {
        levelOrderTraversal(root);
    } else {
        cout << "The tree is empty.\n";
    }

    cout << "\nEnter the value to delete from BST: ";
    int target;
    cin >> target;


    while(target != -1)
    {
        root = deleteFromBST(root, target);

    cout << "\nLevel Order Traversal after Deletion:\n";
    if (root) {
        levelOrderTraversal(root);
    } else {
        cout << "The tree is empty.\n";
    }


        cout << "\nEnter the value to delete from BST: ";
        cin >> target;

    }


    return 0;
}