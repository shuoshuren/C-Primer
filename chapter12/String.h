//
// Created by xiao on 2017/1/12.
//

#ifndef CHAPTER12_STRING_H
#define CHAPTER12_STRING_H

#include <iostream>

/**
 * 正常的String类
 */
class String {
private:
    char * str;
    int len;
    static int num_strings;
    static const int CIN_LIMIT = 80;//cin输入的限制字符数

public:
    String(const char * s);//构造器
    String();//默认构造器

    String(const String &s); //复制构造器
    ~String(); //析构函数



    /**
     * 重载的方法
     */
    char & operator[](int i);
    const char & operator[](int i) const;
    String & operator=(const char * str);
    String & operator=(const String & s);

    /**
     * 友元函数
     */
    friend bool operator<(const String &str1,const String &str2);
    friend bool operator>(const String &str1,const String &str2);
    friend bool operator==(const String &str1,const String &str2);
    friend std::istream & operator>>(std::istream &is,String &st);
    friend std::ostream & operator<<(std::ostream & out,const String & s);

    static int howMany();
    int length() const{
        return len;
    }


};


#endif //CHAPTER12_STRING_H
