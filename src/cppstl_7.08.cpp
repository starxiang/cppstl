#include <iostream> 
#include <deque> 


using namespace std; 

int main() {

    deque<int> d; 
    
    d.push_back(10); 
    d.push_back(20); 
    d.push_back(30); 
    d.push_back(40); 
    d.push_back(50); 
    
    for(int i=0; i < d.size(); i++) {
        cout << d.at(i) << "\t"; 
    }
    
    cout << endl;

    d.push_front(0); 
    d.push_front(1); 
    d.push_front(5);


    cout << "push_front (0 ,1, 5) : " ; 

    // 遍历 
    for(int i=0; i < d.size(); i++) {
        cout << d.at(i) << "\t"; 
    }

    cout << endl;
    
    d.pop_front(); 
    d.pop_front(); 
    d.pop_front(); 

    // 遍历 
    for(int i=0; i < d.size(); i++) {
        cout << d.at(i) << "\t"; 
    }

    cout << endl;

    return 0;
}