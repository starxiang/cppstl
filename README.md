# C++ 标准库 STL

## 通用容器

### 容器分类

C++标准库中应用的容器主要可以分为三种，分别为

- 序列性容器：按照线性排列来存储某类型值得集合，每个元素都有自己特定的位置。
  - vector 向量
  - deque 双端队列
  - list 链表
- 关联式容器：根据键值对来检索数据，具备更快速高效地检索数据的能力
  - set 集合
  - multiset 多重集合
  - map 一对一映射
  - multimap 一对多映射
- 容器适配器：对已有的容器进行某些特性的在封装，不是一个真正的容器
  - stack 堆栈
  - queue 队列

容器具有的一些共同函数
- 默认构造函数
- 复制构造函数
- 析构函数
- empty函数：判断容器是否为空
- max_size函数：返回容器可以容纳的最大元素个数
- size 返回容器中当前元素个数
- operator= 将一个容器赋给另一个容器
- operator< 
- operator<=
- operator>
- operator>=
- operator==
- operator!=
- swap 交换两个容器的元素


### vector

vector是向量，也可以理解为动态数组，它会在堆里分配内存，然后元素是连续存放的，可以使用下标操作符[]对元素实现随机访问。有size和capability这两个参数表示容量，size是实际容量，而capability是最大容量，只要capability不变化，vector所占用的空间大小就是不变化的。

如果元素是结构体或者类，那么进行移动，删除等操作时，会触发其构造与析构操作。

vector的常见**构造函数**：

- vector()：创建一个新的vector
- vector(int nSize)：创建一个vector，元素个数为nSize
- vector(int nSize, const T& t)：创建一个vector，元素个数为nSize，且值均为t
- vector(const vector&)：复制构造函数

vector的常见增加函数

- void push_back(const T& x)：向量尾部增加一个元素x
- iterator insert(iterator it, const T& x)：向量中某一元素前增加一个元素
- 


### deque

deque是双端队列，支持随机访问与快速插入删除，在某一位置上操作所花费的时间为线性时间。

可以从最开始，也可以从最末尾对队列进行操作。


### list

list为双线性链表，只能随机访问，不能进行快速插入删除，操作只能从前往后，或者从后往前，随机访问任何元素需要从头或者从尾开始一个个进行遍历查找，但是不存在空间不足的情况，针对每一个元素分配空间。

### set

快速查找，不允许重复值，用一棵平衡树来进行存储，遍历的时候就已经排序了，查找也快。

### multiset

快速查找，不允许重复值。

### map

一对一映射，基于关键字快速查找，不允许重复值

### multimap

一对多映射，基于关键字快速查找，允许重复值

### stack

堆栈，后进先出 LIFO

### queue

队列，先进先出 FIFO