#include <iostream>
#include <list>

using namespace std; 

typedef list<int> LISTINT; 

int main() {

    LISTINT t1; 

    t1.push_back(1);
    t1.push_back(5);
    t1.push_back(3);
    t1.push_back(10);
    
    
    LISTINT t2; 
    t2.push_back(4);
    t2.push_back(8);
    t2.push_back(6);
    t2.push_back(9);

    t2.push_back(4);
    t2.push_back(8);
    t2.push_back(6);
    t2.push_back(9);

    t2.push_back(4);
    t2.push_back(8);
    t2.push_back(6);
    t2.push_back(9);
    
    
    t1.sort(); 
    t2.sort();
    
    for(LISTINT::iterator it = t1.begin(); it != t1.end(); it++) {
        cout << *it << "\t";
    }

    cout << endl;

    t1.splice(t1.begin(), t2); // move data;  not copy; 

    t1.merge(t2);

    for(LISTINT::iterator it = t1.begin(); it != t1.end(); it++) {
        cout << *it << "\t";
    }

    // empty
    for(LISTINT::iterator it = t2.begin(); it != t2.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;

    // unique data;
    t1.unique(); 

     for(LISTINT::iterator it = t1.begin(); it != t1.end(); it++) {
        cout << *it << "\t";
    }


    return 0;
}