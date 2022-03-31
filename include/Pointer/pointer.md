# 关于指针

​	计算机在存储变量时会分三段来存储变量信息，主要包含如下三个部分

* 信息存储在何处-地址

* 存储的值是多少-值

* 存储信息的类型是什么-占据内存大小

  我们使用&来找到常规变量的地址（&取地址符）

```c++
#include <iostream>

int main()

{

  using namespace std;

  int donuts = 6 ;

  double cups = 4.5 ;

  cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;

  cout << "cups value = " << cups << " and cups address = " << &cups << endl;

  system("pause");

  return 0 ;  

}
```

​	指针是一种特殊类型的变量，普通变量将值视为指定量，而将地址视为派生量，但在存储过程中，这一想法刚好相反，指针变量用于存储数据因此，内存地址视为指定量，而值是指针变量的派生量；

​	我们可以使用*来对指针类型的变量进行解引用，来得到指针变量中的派生量-值

```C++
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6 ;
    double cups = 4.5 ;
    cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups << " and cups address = " << &cups << endl;
    system("pause");
    return 0 ;
    
}
```

## 关于空指针和未初始化地址的指针

​	空指针和未初始化的指针在本质定义上有所不同，如果指针未初始化，则这个指针可以指向任何位置（可能指向已占用位置，也可能指向未占用的位置，这样做非常危险），但空指针可以保证不指向任何函数或对象；

## 使用new（malloc）来分配内存

​	指针的本质作用，是给内存提供一个别名，让我们可以在运行阶段，可以通过指针来访问某一内存地址；在C中我们使用malloc来初始化内存地址，在C++中我们使用更新的new来进行内存地址的分配；

```c++
int * pn = new int //new找到了一块合适int长度的内存地址，程序员把这个内存地址分配给了pn这个指针变量；
```

## 关于new指针出来的变量和正常声明出来的变量的说明

```C++
#include <iostream>

int main () 

{

  using namespace std;

  int nights = 1001 ;

  int * pt =new int; //allocate space for an int 

  *pt = 1001 ;

  cout << "nights value = " << nights << ": location " << &nights << endl;

  cout << "int " << "value = "<< *pt << ": location = " << pt << endl ;

  



  double * pd = new double ;

  *pd = 1000001.0;

  cout << "double " << "value = "<< *pd << ": location = " << pd << endl ;

  cout << "location of pointer pd : " << &pd <<endl;

  cout << "size of pt = " << sizeof(pt) << " size of *pt = " << sizeof(*pt) <<endl;

  cout << "size of pd = " << sizeof(pd) << " size of *pd = " << sizeof(*pd) <<endl;

  system("pause");

  return 0 ;

}
```

* 不论什么类型的指针变量，其本质类型都是指针，因此不论是double类型还是int类型的指针变量，均占8个字节，而int型指针指向的地址中存储的int型数据占4字节而double指针指向的double数据占8字节；
* new分配的内存块与常规变量声明申请的内存块不在同一个位置，new分配内存在堆（heap/自由存储区-free store）上，而变量night和pd的值都存储在栈（stack）上

## 使用delete释放内存需要注意的几点

* delete可以释放由new申请的内存
* delete不可以释放由普通变量申请到的内存，因为普通变量申请的内存在栈上
* 不要尝试delete已经被释放的内存块
* 对于空指针的delete是安全的

