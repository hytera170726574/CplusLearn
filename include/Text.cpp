#include "Text.h"
#include <iostream>
#include <fstream>

using namespace std;

string Texttest::contents()
{
    return str_contents;
}

Texttest::Texttest(string filename)
{
    str_contents = "";
    ifstream myfile (file_name);
    string temp ;
    if(!myfile.is_open())
    {
        cout << "Can not open file : " << file_name << endl;
    }
    while ( getline(myfile,temp))
    {
        str_contents = str_contents + temp;     /* code */
    }
    myfile.close(); 

    
}

Texttest::~Texttest()
{

}

Texttest::Texttest()
{
    str_contents = "";
}