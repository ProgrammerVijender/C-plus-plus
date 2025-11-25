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
    
    cout<< "Inserting word: " << word << endl ;
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


int main(){
    cout << "Hello, World!" << endl;

    // TrieNode* root = new TrieNode('\0');
    TrieNode* root = new TrieNode('-');
    
    insertWord(root, "hello");
    insertWord(root, "vinit");
    insertWord(root, "tejas");
    insertWord(root, "pawan");

    cout << endl << "Insertion Done" << endl;
    if(searchWord(root, "vinit")){
        cout << "Word found" << endl;
    } else {
        cout << "Word not found" << endl;
    }


    deleteWord(root, "vinit");
    if(searchWord(root, "vinit")){
        cout << "Word found" << endl;
    } else {
        cout << "Word not found after delete " << endl;
    }
    return 0;
}