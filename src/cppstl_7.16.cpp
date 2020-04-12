// 队列和栈是常用的数据结构
// 队列只允许在表的一端插入，在另一端删除，允许插入的一端叫做队尾，允许删除的一端叫做队头，是一种先进先出线性表
// 栈只允许在表的一端进行插入和删除操作，是一种后进先出的线性表
// 队列和栈的默认容器都是deque

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>

using namespace std;

/*
void PrintStack(stack<int, vector<int> > obj)
{
    while(!obj.empty())
    {
        cout << obj.top() << "\t";
        obj.pop();
    }
}

void PrintStack(stack<string, list<string> > obj)
{
    while(!obj.empty())
    {
        cout << obj.top() << "\t";
        obj.pop();
    }
}
*/

template<class T, class Container>
void PrintStack(stack<T, Container> obj)
{
    while(!obj.empty())
    {
        cout<<obj.top()<<"\t";
        obj.pop();
    }
}

int main()
{
    stack<int, vector<int> > s;
    for (int i = 0; i < 4; i++)
    {   
        s.push(i+1);
    }
    PrintStack(s);
    cout<<endl;

    string str="a";
    stack<string, list<string> > t;
    for(int i=0;i<4;i++)
    {
        t.push(str);
        str+="a";
    }
    PrintStack(t);
    cout<<endl;

    stack<float, deque<float> > u;
    for (int i = 0; i < 4; i++)
    {
        u.push(i+1);
    }
    PrintStack(u);
    
    return 0;   
}