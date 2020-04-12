// 优先队列容器与队列一样，只能从队尾插入元素，从队首删除元素。但是它有一个特性，就是队列中最大的元素总是位于队首，所以出队时，并非按照先进先出的原则进行，而是将当前队列中最大的元素出队。这点类似于给队列里的元素进行了由大到小的顺序排序。

#include <iostream>
#include <queue>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    priority_queue<int> pr(a,a+9);
    pr.push(a[9]);

    cout<<"Input Order:";
    copy(a,a+10,ostream_iterator<int>(cout, "\t"));
    cout<<endl;

    cout<<"Output Order";
    while(!pr.empty())
    {
        cout<<pr.top()<<"\t";
        pr.pop();
    }
}