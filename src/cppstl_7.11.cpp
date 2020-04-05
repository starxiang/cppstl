#include <iostream>
#include <string>

#include <list>

using namespace std; 

typedef list<string> LISTSTR;

int main() {

    LISTSTR test; 
    
    test.push_back("back");
    test.push_front("middle"); 
    test.push_front("front");

    cout << test.front() << endl;
    cout << *test.begin() << endl;

    cout << test.back() << endl; 
    cout << *( test.rbegin()) << endl;
    
    test.pop_front();
    test.pop_back();

    cout << test.front() << endl;

    return 0;
}