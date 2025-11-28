#include <iostream>
using namespace std;

class TrieNode {
public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val) {
        
        this->value = val;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

// insertion
void insertWord(TrieNode* root, string word) {
    
    // cout<< "Inserting word: " << word << endl ;
    // base case
    if(word.length() == 0) {
        root->isTerminal = true;
        return;
    }

    char firstChar = word[0];
    int index = firstChar - 'a';
    TrieNode* child;


    if (root->children[index] != NULL) {
        child = root->children[index];
    } else {
        child = new TrieNode(firstChar);
        root->children[index] = child;
    }


    insertWord(child, word.substr(1));
}


bool searchWord(TrieNode* root, string word) {
    // base case
    if(word.length() == 0) {
        return root->isTerminal;
    }

    char firstChar = word[0];
    int index = firstChar - 'a';
    TrieNode* child;

    if (root->children[index] != NULL) {
        child = root->children[index];
    } else {
        return false;
    }

    return searchWord(child, word.substr(1));
}

void deleteWord(TrieNode* root , string word) {
    
    if(word.length() == 0) {
        root->isTerminal = false;
        return;
    }

     char firstChar = word[0];
    int index = firstChar - 'a';
    TrieNode* child;

    if (root->children[index] != NULL) {
        child = root->children[index];
    } else {
        return;
    }

    return deleteWord(child, word.substr(1));
}
void storeString(TrieNode* root , string input , vector <string> & ans , string Prefix){

    if(root->isTerminal == true){
        // ans store
        ans.push_back(Prefix +input);
    }

    for(char ch = 'a' ; ch < 'z' ; ch++){

        int index = ch - 'a';

       TrieNode* next = root->children[index];
       

        if(next != NULL){

            // child exists
            input.push_back(ch);
            
            // baki recursion
            storeString(next , input , ans , Prefix);

            // backtracking
            input.pop_back();
            
        } else {
            continue;
        }

        // storeString(child , input + ch , ans); // This line seems to be a duplicate or an error in logic
    }
}
void findPrefixString(TrieNode* root, string input , vector <string> & ans   , string Prefix){
   // base case
   if(input.length() == 0){

    TrieNode* lastchar = root;
    storeString(lastchar , input , ans , Prefix);
       return;
   }

    char firstChar = input[0];
    int index = firstChar - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        child = root->children[index];
        // ans.push_back(index);
    } else {
        return;
    }

    findPrefixString(child , input.substr(1) , ans , Prefix);


}

int main(){
    
    // TrieNode* root = new TrieNode('\0');
    TrieNode* root = new TrieNode('-');
    
    insertWord(root, "hello");
    insertWord(root, "vinit");
    insertWord(root, "tejas");
    insertWord(root, "param");
    insertWord(root, "parameter");
    insertWord(root, "pawan");

    string input = "p";

    vector <string> ans;
    findPrefixString(root , input , ans , input);

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
   


    return 0;
}