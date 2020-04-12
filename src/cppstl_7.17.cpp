#include <iostream>
#include <string>
#include <list>
#include <deque>
#include <queue>

using namespace std;

template<class T, class Container>
void PrintQueue(queue<T, Container> obj)
{
    while(!obj.empty())
    {
        cout<<obj.front()<<"\t";
        obj.pop();
    }
}

int main()
{
    string str="a";
    queue<string, deque<string> > t;
    for (int i = 0; i < 4; i++)
    {
        t.push(str);
        str+="a";
    }

    PrintQueue(t);
    cout<<endl;

    queue<float, list<float> > u;
    for (int i = 0; i < 4; i++)
    {
        u.push(i+1);
    }
    PrintQueue(u);

    return 0;
}