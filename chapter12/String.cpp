//
// Created by xiao on 2017/1/12.
//

#include <cstring>
#include "String.h"

int String::num_strings = 0;

int String::howMany() {
    return num_strings;
}

/**
 * 默认构造器
 */
String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;

}

/**
 * 构造器
 * @param s
 */
String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;

}


/**
 * 复制构造器
 * @param s
 */
String::String(const String &s){
    num_strings++;
    len = s.len;
    str = new char[len+1];
    std::strcpy(str,s.str);


}

/**
 * 析构函数
 */
String::~String() {
    num_strings--;
    delete[] str;

}

/**
 * 重载[]运算符
 * @param i
 * @return
 */
char & String::operator[](int i){
    return str[i];

}

/**
 * 重载[]运算符
 * @param i
 * @return
 */
const char & String::operator[](int i) const{
    return str[i];

}

/**
 * 重载运算符=,将c字符串复制给String对象
 * @param s
 * @return
 */
String & String::operator=(const char * s){

    delete[] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

/**
 * 重载运算符=,将一个String对象复制给String对象
 * @param s
 * @return
 */
String & String::operator=(const String & s){
    if(this==&s){
        return *this;
    }
    delete[] str;
    len = s.len;
    str = new char[len+1];
    std::strcpy(str,s.str);
    return *this;

}



/**
 * 友元函数<
 * @param str1
 * @param str2
 * @return
 */
bool operator<(const String &str1,const String &str2){

    return std::strcmp(str1.str,str2.str) <0;

}

/**
 * 友元函数>
 * @param str1
 * @param str2
 * @return
 */
bool operator>(const String &str1,const String &str2){
    return str1 < str2;
}

/**
 * 友元函数==
 * @param str1
 * @param str2
 * @return
 */
bool operator==(const String &str1,const String &str2){
    return std::strcmp(str1.str,str2.str) == 0;
}

/**
 * 友元函数>>
 * @param in
 * @param str
 * @return
 */
std::istream & operator>>(std::istream & in,String & s){
    char temp[String::CIN_LIMIT];
    in.getline(temp,String::CIN_LIMIT);
    if(in){
        s.str = temp;
    }
    return in;

}

/**
 * 友元函数<<
 * @param out
 * @param stringBad
 * @return
 */
std::ostream & operator<<(std::ostream & out,const String & s){

    return out<<s.str;
}
