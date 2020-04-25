#include <set>
#include <iostream>

using namespace std; 

void display(set<int> &s) {

    set<int>::iterator te = s.begin(); 
    while(te != s.end()) {
        cout << *te << "\t";
        te++;
    }

    cout << endl; 
}



int main() {
    
    int a[] = {5, 3,9,3,7,2,9,3}; 

    set<int> myset(a, a+sizeof(a) / sizeof(int)); 
    multiset<int> mymultiset(a, a+ sizeof(a) / sizeof(int));

    display(myset);

    pair< set<int>::iterator, set<int>::iterator > rangeset; 
    pair<multiset<int>::iterator, multiset<int>::iterator> rangemultiset; 
    
    rangeset = myset.equal_range(3); 
    
    rangemultiset = mymultiset.equal_range(3);
    
    int nCount = myset.count(3); 
    
    int nMultiCount = mymultiset.count(3);

    
    // set<int>::iterator te = null ; 

    cout << "set equal 3 is "; 

    for(set<int>::iterator te = rangeset.first; te != rangeset.second; te++) {
        cout << * te << "\t";
    }

    cout << endl; 

    cout << "\t Count is => " << nCount  << endl; 
    cout << "\t TotalCount is => " << myset.size() << endl; 
    
    // multiset<int>::iterator it = null; 
    cout << "multiset search 3 is vals => "; 

    for(multiset<int>::iterator it = rangemultiset.first; it != rangemultiset.second; it++) {
        cout << *it << "\t"; 
    }
    
    cout << endl; 

    cout << "\t Count is => " << nMultiCount  << endl; 
    cout << "\t TotalCount is => " << mymultiset.size() << endl; 


    return 0; 

}