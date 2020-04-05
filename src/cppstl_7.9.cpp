#include <iostream>
#include <vector>
#include <deque>

using namespace std; 

int main() {

    vector<int> v(2); 
    
    // v.push_back(10);
    
    v[0] = 10;
    
    int* p = &v[0];

    // cout << "Vector 第一个元素迭代指针 *p = " << *p << endl; // 10
    cout << "Vector &v[0] = " << &v[0] << endl; // 10

    // cout << "Vector capacity: " << v.capacity() << endl; // 10
    // cout << "Vector size: " << v.size() << endl;

    v.push_back(20);

    // cout << "Vector 容量变化后 原Vector第一个元素迭代指针 *p = " << *p << endl; // 数不确定(?)
    // cout << "Vector 第一个元素迭代指针 *p = " << *(v.begin()) << endl; // 10
    cout << "Vector &v[0] = " << &v[0] << endl; // 10

    cout << "Vector capacity: " << v.capacity() << endl; // 10
    cout << "Vector size: " << v.size() << endl;

    
    deque<int> d(2); 
    d[0] = 10;
    int* q = &d[0];

    cout << "Deque 第一个元素迭代指针 *q = " << *q << endl;

    d.push_back(20); 

    cout << "Deque 容量变化后 原Deque 第一个元素迭代指针 *q = " << *q << endl;


    return 0;
}