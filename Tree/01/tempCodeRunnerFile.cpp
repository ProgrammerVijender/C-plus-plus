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

    // hd means horizontal distance
    void printTopView(Node* root )
    {
        // , int hd
        map<int,int> hdToNodemap;
        queue <pair <Node*,int>> q;

        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair <Node*,int> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second;

            // map me dalenge if not added before 
            if(hdToNodemap.find(hd) == hdToNodemap.end())
            {
                hdToNodemap[hd] = frontNode->data;
            }

            //child ko dekhenge
            if(frontNode->left != NULL)
            {
                q.push(make_pair(frontNode->left,hd-1));
            }
            if(frontNode->right != NULL)
            {
                q.push(make_pair(frontNode->right,hd+1));
            }
        }


        cout<<"printing Topview : "<<endl;

        // 
        for (std::map<int, int>::iterator it = hdToNodemap.begin(); it != hdToNodemap.end(); ++it) {
    // Access key as it->first and value as it->second
    std::cout << it->second << " "; 
}
        cout<<endl;


    }


int main()
{   
    Node* root = createTree();
    
    cout<<endl;
    
   printTopView(root);

    return 0;
}
