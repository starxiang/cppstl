#include <iostream>
#include <list> 

using namespace std;

typedef list<int> LISTINT; 

int main() {

    LISTINT test; 

    for(int i = 0; i < 5; i++) {
        test.push_back(i + 1); 
    }    

    // show 
    LISTINT::iterator it = test.begin(); 
    for(; it != test.end(); it++) {
        cout << *it << "\t"; 
    }

    cout << endl;

    // reverse_show 
    LISTINT::reverse_iterator rit = test.rbegin(); 
    for(; rit != test.rend(); rit++) {
        cout << *rit << "\t"; 
    }


    return 0;
}