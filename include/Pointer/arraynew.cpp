#include <iostream>
int main ()
{
    using namespace std;
    double * p3 = new double [3];
    p3[0]=0.1;
    p3[1]=0.5;
    p3[2]=0.8;
    cout <<"p3[1] is "<< p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and " << "p3[1] is " << p3[1] << endl;
    p3 = p3 -1 ;//point back to beginning 
    delete [] p3;
    system("pause");
    return 0;

}