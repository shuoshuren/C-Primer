//
// Created by xiao on 2017/1/11.
//

#include <cstring>
#include <iostream>
#include "StringBad.h"

int StringBad::num_strings = 0;

StringBad::StringBad() {
    len = 4;
    str = new char[len+1];
    std::strcpy(str,"C++");
    ++num_strings;
    cout<<num_strings<<":"<<str<<" create"<<endl;

}

StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    ++num_strings;
    cout<<num_strings<<":"<<str<<" create"<<endl;
}

StringBad::~StringBad() {
    --num_strings;
    cout<<num_strings<<":"<<str<<" destroy"<<endl;
    delete [] str;
}

ostream & operator<<( ostream &out,const StringBad &stringBad){

    return out<<"str："<<stringBad.str<<" len:"<<stringBad.len;
}
