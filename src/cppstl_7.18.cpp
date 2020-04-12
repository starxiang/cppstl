#include <iostream>
#include <deque>
#include <stack>

using namespace std;

template<class T, class Container=deque<T> >
class mystack:public stack<T, Container>
{
private:
    int m_nMaxSize;

public:
    mystack(int maxsize):m_nMaxSize(maxsize){}

    void push(const T &t)
    {
        if(stack<T, Container>::size() < m_nMaxSize)
        {
            stack<T, Container>::push(t);
        }
        else
        {
            cout<<"Stack is full."<<" the term "<<t<<" is not pushed"<<endl;
        }
        
    }
};

int main()
{
    mystack<int, deque<int> > obj(2);
    obj.push(1);
    obj.push(2);
    obj.push(3);
}