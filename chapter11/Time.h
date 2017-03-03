//
// Created by xiao on 2017/1/11.
//

#ifndef CHAPTER11_TIME_H
#define CHAPTER11_TIME_H

#include <iostream>
using std::ostream;


class Time {
private:
    int hour;
    int minute;
public:
    Time();
    Time(int h,int m = 0);
    void addMin(int m);
    void addHour(int h);
    void reset(int h=0,int m=0);
    Time sum(const Time & t)const ;
    //运算符重载
    Time operator+(const Time & t)const ;
    Time operator-(const Time & t)const ;
    Time operator*(double n)const ;
    //友元函数
    friend Time operator*(double n,const Time &t);
    //友元函数重载<<第一个版本
//    friend void operator<<(ostream &out,const Time &time); //重载<<
    //友元函数重载<<第二个版本
    friend ostream & operator<<(ostream &out,const Time &time); //重载<<

    void show()const;



};


#endif //CHAPTER11_TIME_H
