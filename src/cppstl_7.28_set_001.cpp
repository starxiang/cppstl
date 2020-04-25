#include <iostream>
#include <set>

using namespace std; 

void display(multiset<int> &s) {

    multiset<int>::iterator te = s.begin(); 
    while(te != s.end()) {
        cout << *te << "\t";
        te++;
    }

    cout << endl; 
}


int main() {
    
    int a[] = {5, 3,9,3,7,2,9,3}; 

    multiset<int> myset; 
    
    for(int i=0; i < sizeof(a)/ sizeof(int); i++) {
        myset.insert(a[i]);
    }

    cout << "insert(T t): " << endl; 
    
    display(myset); 
    
    cout << "created by contructor set(const set&x)" << endl; 

    multiset<int> myset2(myset); 
    display(myset2); 

    multiset<int> myset3(a, a + sizeof(a)/sizeof(int)); 

    display(myset3); 
}