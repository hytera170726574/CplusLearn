#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens; //把higgents的地址 初始化赋值给pt
    cout << "Value of higgens = " << higgens << "; Address of higgens = "<< &higgens << endl;
    cout << "Value of *pt = " << *pt << "; Value of pt = "<< pt << endl;//pt是指针，pt变量的值就是地址，*pt就是pt的值
    system("pause");
    return 0;
}