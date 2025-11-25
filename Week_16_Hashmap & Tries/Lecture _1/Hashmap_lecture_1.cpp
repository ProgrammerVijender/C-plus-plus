#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    // creation of hashmap
    unordered_map<string, int> mapping;

    // 3 ways of insertion
    pair<string,int > p = make_pair("Vijender", 100);

    pair<string,int > q("Tejas", 329);

    pair<string,int > r;

    r.first = "Pawan Rajput";
    r.second = 44;

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);


    cout<< "Map size is: " << mapping.size() << endl;

    // ACCESSING VALUES
    // print value using (at member function)
    cout<< "Value at key Tejas is: " << mapping.at("Tejas") << endl;
    cout<< "value of Vijender is: " << mapping["Vijender"] << endl;

    cout<<mapping.count("Tejas"); // returns 1 if key is present else returns 0

    if(mapping.find("Pawan Rajput") != mapping.end()){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}

