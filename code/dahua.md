1. 迭代器删除之后迭代器处理

```c

//对于关联容器（如map，set，multimap，multiset），删除当前的iterator，仅仅会使当前的iterator失效，
//只要在erase时，递增当前的iterator即可。这是因为map之类的容器，使用了红黑树来实现，插入，删除一个结点不会对其他结点造成影响。使用方式如下例子
set<int> valset = { 1,2,3,4,5,6 };
set<int>::iterator iter;
for (iter = valset.begin(); iter != valset.end(); )
{
     if (3 == *iter)
          valset.erase(iter++);
     else
          ++iter;
}


//对于序列式容器（如vector，deque等），删除当前的iterator会使后面所有元素的iterator都失效。
//这是因为vector，deque使用了连续分配的内存，删除一个元素导致后面所有的元素会向前移动一个位置。不过erase方法可以返回下一个有效的iterator

vector<int> val = { 1,2,3,4,5,6 };
vector<int>::iterator iter;
for (iter = val.begin(); iter != val.end(); )
{
     if (3 == *iter)
          iter = val.erase(iter);     //返回下一个有效的迭代器，无需+1
     else
          ++iter;
}
```
2. 函数指针
3. 模板编程判断智能指针

4. 菱形继承(D中会有两个A的拷贝)
```c
        A
    B      C
        D
       B和C在继承A的时候，使用虚继承virtual，减少内存浪费
```
5. 内存泄漏: 分配通过malloc,realloc new等从堆中分配的一块内存之后，没有释放： 可以使用valgrind分析工具分析内存泄露，养成良好的编程习惯。

6. 野指针就是使用没有初始化的指针，悬空指针就是使用已经释放的内存的指针：养成良好的编程习惯。

7. 引用是被引用对象的别名，本身占用内存，被引用对象不可改变。指针没有相应的限制。

8. C++中的explicit关键字只能用于修饰只有一个参数的类构造函数, 它的作用是表明该构造函数是显示的, 而非隐式的
explicit关键字的作用就是防止类构造函数的隐式自动转换.

```cpp

class CxString  // 如果没有使用explicit关键字的类声明, 即默认为隐式声明  
{  
public:  
    char *_pstr;  
    int _size;  
    explicit CxString(int size)  
    {  
        _size = size;                // string的预设大小  
        _pstr = malloc(size + 1);    // 分配string的内存  
        memset(_pstr, 0, size + 1);  
    }  
    CxString(const char *p)  
    {  
        int size = strlen(p);  
        _pstr = malloc(size + 1);    // 分配string的内存  
        strcpy(_pstr, p);            // 复制字符串  
        _size = strlen(_pstr);  
    }  
    // 析构函数这里不讨论, 省略...  
};  

//调用
 CxString string2 = 10;    // 这样是不行的, 因为explicit关键字取消了隐式转换 ,有隐式转换则可以这么做，表示size = 10；

```

9. 拷贝构造函数和复制运算符
```cpp

A (const A& other)//拷贝构造函数

A& operator = (const A& other)

A a = b;//拷贝构造函数或者A a(b);

a = b;

```
10. 析构函数为什么要求是虚的
如果以一个基类指针指向其派生类，删除这个基类指针只能删除基类对象部分，而不能删除整个派生类对象，原因是通过基类指针无法访问派生类的析构函数。
但是，如果像其它虚函数一样，基类的析构函数也是虚的，那么派生类的析构函数也必然是虚的，删除基类指针时，它就会通过虚函数表找到正确的派生类析构函数并调用它，
从而正确析构整个派生类对象。


11. 左值引用， 右值引用(引用也占用内存)
* 左值引用是为对象起的别名，必须被初始化，与变量绑定到一起，且将一直绑定在一起
```cpp

int i = 42;
int &r = i;    //正确，左值引用
```
* 右值引用就是必须绑定到右值—---只能绑定到一个将要销毁的对象上
```cpp
int &&rr1 = 42; //正确，42是右值
int &&rr1 = i *42;  //正确，i*42是一个右值

```
* 左值拥有持久的状态，而右值要么是字面常量，要么是在表达式求职过程中创建的临时对象。
```cpp

int &&rr3 = std::move(rr1);
```

11. 更改常量
```cpp

const int a = 10;
int *p  = (int*)&a;
*p = 20;
```

12. typeInfo是类 typeid是关键字
* RTTI：Run Time Type Identification,运行时类型识别。
通过RTTI，程序能够使用基类的指针或者引用来检查这些指针或者引用所指的对象的实际派生类型。
```c
/*
和sizeof这类的操作符一样，typeid是C++的关键字之一。
typeid操作符的返回结果是名为type_info的标准库类型的对象的引用（在头文件typeinfo中定义）
C++并没有规定typeid实现标准，各个编译器可能会不一样。
编译器会为每一种typeid操作的类型生成一份保存在数据段的type_info数据。
每种类型的type_info数据长度依赖于类型名称，至少9个字节。

typeid关键字的返回值是typeInfo类型的对象， typeInfo类重载了"==" 和"!="运算符， 实现name函数：
t1 == t2	如果两个对象t1和t2类型相同，则返回true；否则返回false
t1 != t2	如果两个对象t1和t2类型不同，则返回true；否则返回false
t.name()	返回类型的C-style字符串，类型名字用系统相关的方法产生1
t1.before(t2)	返回指出t1是否出现在t2之前的bool值

*/
```
13. 静态多态（早绑定）、动态多态（晚绑定）。静态多态是通过函数重载实现的；动态多态是通过虚函数实现的。
多态是以封装和继承为基础的。

14. malloc：申请指定字节数的内存。申请到的内存中的初始值不确定。
calloc：为指定长度的对象，分配能容纳其指定个数的内存。申请到的内存的每一位（bit）都初始化为 0。
realloc：更改以前分配的内存长度（增加或减少）。当增加长度时，可能需将以前分配区的内容移到另一个足够大的区域，而新增区域内的初始值则不确定。
alloca：在栈上申请内存。程序在出栈的时候，会自动释放内存。但是需要注意的是，alloca 不具可移植性, 而且在没有传统堆栈的机器上很难实现。alloca 不宜使用在必须广泛移植的程序中。C99 中支持变长数组 (VLA)，可以用来替代 alloca。

