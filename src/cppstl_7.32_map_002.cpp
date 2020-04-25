#include <iostream>
#include <string>
#include <map>

using namespace std; 

int main() {

    map<string, string> mymap; 
    
    mymap["1-1"] = "yuandan"; 
    mymap["5-1"] = "wuyi"; 
    mymap["7-1"] = "qiyi"; 
    mymap["8-1"] = "bayi"; 
    mymap["10-1"] = "shiyi"; 

    string s = mymap["1-1"]; 

    if(s.size() > 0) {
        cout << "1-1 => " <<  s <<  " \t" << s.size() << endl;
    } else {
        cout << "Not Value." <<  endl; 
    }
    
    s = mymap["6-1"]; 
    
    if(s.size() > 0) {
        cout << "6-1 => " <<  s << endl;
    } else {
        cout << "Not Value." << s << "<- "  <<  s.size() <<  endl; 
    }
    

    return 0; 
}