#ifndef SRC_TEXT_H_
#define SRC_TEXT_H_

using namespace std;
#include <string>

class Texttest 
{
    string str_contents;
    string file_name;
public:
    Texttest();
    Texttest(string filename);
    ~Texttest();
    string contents();
};
#endif /* SRC_TEXT_H_ */