#include<iostream>
#include<unordered_map>
using namespace std;

void frequencyCount( unordered_map<char, int> &mapping ,string str) {
    
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        mapping[ch]++;
    }
}

int main(){
    string str = "VIJENDER";
    unordered_map<char, int> mapping;
    frequencyCount(mapping, str);

    for(auto it : mapping) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
} 