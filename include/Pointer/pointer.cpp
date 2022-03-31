#include <iostream>
int main()
{
    using namespace std;
    int updates = 6 ; //声明了一个变量
    int * p_updates ; //声明了一个int型指针
    p_updates = &updates;
    //express values two ways
    cout << "Values : updates = " << updates;
    cout << " , p_updates = " << *p_updates<< endl;
    //express address two ways
    cout << "Address : &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    //use ppinter to change value 
    *p_updates = *p_updates +1 ;
    cout << "Now updates = " << updates << endl;
    system("pause");
    return 0;
}