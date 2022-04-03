#include <iostream>
void simple();
int main()
{
    using namespace std;
    cout << "main() wil call the simple function :\n";
    simple();//function called
    cout << "main() is finished with the simple function\n";
    system("pause");
    return 0;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}