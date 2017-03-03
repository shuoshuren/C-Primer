//
// Created by xiao on 2017/1/11.
//

#ifndef CHAPTER12_STRINGBAD_H
#define CHAPTER12_STRINGBAD_H

#include <ostream>
using namespace std;

/**
 * 有缺陷的String类
 */
class StringBad {
private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad();
    StringBad(const char * s);
    ~StringBad();
    friend ostream & operator<<(ostream & out,const StringBad & stringBad);


};


#endif //CHAPTER12_STRINGBAD_H
