#include <iostream>
using namespace std;


// wrong h code


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

    void insertWord( TrieNode* root , string word) {
    
        // cout<< "Inserting word: " << word << endl ;
        // Base case: if the word is empty, mark the current node as terminal
        if(word.length() == 0) {
            this->isTerminal = true;
            return;
        }

        char firstChar = word[0];
        int index = firstChar - 'a';
        TrieNode* child;
        
        // Check if the child node for the current character already exists
        if(root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // If not, create a new TrieNode and link it
            child = new TrieNode(firstChar);
            root->children[index] = child;
        }
        insertWord(child, word.substr(1)); // Recursively call for the rest of the word
    }

    
};


void printTrie(TrieNode* root, string prefix) {
    if(root->isTerminal)
        cout << prefix << endl;

    for(int i = 0; i < 26; i++) {
        if(root->children[i] != NULL) {
            char ch = root->children[i]->value;
            printTrie(root->children[i], prefix + ch);
        }
    }
}

TrieNode* findPrefixNode(TrieNode* root, string prefix , vector <string>& ans) {
    TrieNode* curr = root;

    for (char ch : prefix) {
        int index = ch - 'a';

        if (curr->children[index] == NULL)
            return NULL;

        curr = curr->children[index];
    }
    return curr;
}

void printAllWords(TrieNode* root, string prefix) {
    if (root->isTerminal)
        cout << prefix << endl;

    for (int i = 0; i < 26; i++) {
        if (root->children[i] != NULL) {
            char ch = root->children[i]->value;
            printAllWords(root->children[i], prefix + ch);
        }
    }
}




int main() {
    TrieNode* root = new TrieNode('\0'); // Create the root of the Trie

    root->insertWord(root, "raju");
    root->insertWord(root, "ram");
    root->insertWord(root, "randhawa");


    
    string Prefix = "ra";
    TrieNode* prefixNode = findPrefixNode(root, Prefix);


    if (prefixNode == nullptr)
        cout << "No words found with prefix: " << Prefix << endl;
    else
        printAllWords(prefixNode, Prefix);
    // findPrefixNode(root, "ra");

    return 0;
}