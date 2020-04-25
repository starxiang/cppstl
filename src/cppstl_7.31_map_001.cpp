#include <iostream>
#include <string>
#include <map>

using namespace std; 

void display(map<int, string> &m) {

    map<int, string>::iterator te = m.begin(); 

    while(te != m.end()) {
        cout << (*te).first << "\t" << (*te).second << endl;
        te++;
    }

    cout << endl; 
}

int main() {

    map<int, string> mymap; 
    pair<int, string> s1(1, "zhangsan"); 
    pair<int, string> s2(2, "lisi"); 
    pair<int, string> s3(3, "wangwu"); 
    pair<int, string> s4(4, "zhaosi"); 
    pair<int, string> s5(1, "longwu");

    mymap.insert(s1); 
    mymap.insert(s2); 
    mymap.insert(s3); 
    mymap.insert(s4); 
    mymap.insert(s5);

    cout << "created by function::insert " << endl; 
    display(mymap); 

    cout << "created by copy constructor " << endl; 
    map<int, string> mymap2(mymap);

    display(mymap2); 

    return 0;
}