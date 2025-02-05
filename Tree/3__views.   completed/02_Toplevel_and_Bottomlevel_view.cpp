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
        queue <pair <Node*,int> > q;

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

        //  print whole hashmap
        for (std::map<int, int>::iterator it = hdToNodemap.begin(); it != hdToNodemap.end(); ++it) 
        {
             // Access key as it->first and value as it->second
             std::cout << it->second << " "; 
        }
        cout<<endl;

    // niche wala ye kaam nhi kr rha tha mere compiler me issliye upper wala new way (same working dono ki)
    // for(auto it : hdToNodemap)
    // {
    //    // it.first is hd and it.second is node value
    //     cout<<it.second<<" "; 
            
    // }


    }

// hd means horizontal distance
    void printBottomView(Node* root )
    {
        // , int hd
        map<int,int> hdToNodemap;
        queue <pair <Node*,int> > q;

        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair <Node*,int> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second;

            // map me dalenge if not added before ye topview ke liye hota h 
            // bottom me daalne ke liye hum koi condition nhi denge ye wali becos 
            // sari values overwrite ho jayengi or bottom child values store ho jayengi fir
            /* if(hdToNodemap.find(hd) == hdToNodemap.end())
            {
                hdToNodemap[hd] = frontNode->data;
            } 
            */

            hdToNodemap[hd] = frontNode->data;

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

        //  print whole hashmap
        for (std::map<int, int>::iterator it = hdToNodemap.begin(); it != hdToNodemap.end(); ++it) 
        {
             // Access key as it->first and value as it->second
             std::cout << it->second << " "; 
        }
        cout<<endl;

    // niche wala ye kaam nhi kr rha tha mere compiler me issliye upper wala new way (same working dono ki)
    // for(auto it : hdToNodemap)
    // {
    //    // it.first is hd and it.second is node value
    //     cout<<it.second<<" "; 
            
    // }


    }

// Testing code :- 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
//     printing Topview : 
//     40 20 10 30 60 90 113
// printing Topview : 
// 110 70 111 80 112 90 113 

int main()
{   
    Node* root = createTree();
    
    cout<<endl;
    
   printTopView(root);
   printBottomView(root);


    return 0;
}
