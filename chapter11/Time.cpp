//
// Created by xiao on 2017/1/11.
//

#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

Time::Time() {
    hour = 0;
    minute = 0;
}

Time::Time(int h, int m) {
    if(h<0){
        cout<<"请输入正整数"<<endl;
        return;
    }
    if(m<0){
        cout<<"请输入正整数"<<endl;
        return;
    }

    hour = h + m/60;
    minute = m % 60;
}

void Time::addHour(int h) {
    if(h<0){
        cout<<"请输入正整数"<<endl;
        return;
    }
    hour += h;
}

void Time::addMin(int m) {
    if(m<0){
        cout<<"请输入正整数"<<endl;
        return;
    }
    minute = minute+m;
    hour = hour+minute/60;
    minute = minute%60;
}

void Time::reset(int h, int m) {
    if(h<0){
        cout<<"请输入正整数"<<endl;
        return;
    }
    if(m<0){
        cout<<"请输入正整数"<<endl;
        return;
    }

    hour = h + m/60;
    minute = m % 60;

}

Time Time::sum(const Time &t) const {
    Time sumTime = t;
    sumTime.addHour(hour);
    sumTime.addMin(minute);
    return sumTime;

}

Time Time::operator+(const Time &t) const {
    Time sumTime = t;
    sumTime.addHour(hour);
    sumTime.addMin(minute);
    return sumTime;

}

Time Time::operator-(const Time &t) const {
    Time diff;
    int minutes = (this->hour - t.hour)*60 + this->minute - t.minute;

    diff.hour = minutes /60;
    diff.minute = minutes %60;
    return diff;


}

/**
 * 运算符重载
 * @param n
 * @return
 */
Time Time::operator*(double n) const {
    Time total;
    double minutes = (this->hour*60+this->minute) * n;
    total.hour = (int)minutes /60;
    total.minute = (int)minutes % 60;
    return total;

}

/**
 * 友元函数
 * @param n
 * @param t
 * @return
 */
Time operator*(double n,const Time &t){

    return t*n;
}

/**
 * 重载<<进行输出的第一个版本
 * @param out
 * @param time
 */
//void operator<<(std::ostream &out,const Time &time){
//
//    out<<"time: "<<time.hour<<":"<<time.minute<<endl;
//}

/**
 * 友元函数重载 << 的第二个版本
 * @param out
 * @param time
 * @return
 */
ostream & operator<<(ostream &out,const Time &time){

    return out<<"time: "<<time.hour<<":"<<time.minute;
}

void Time::show() const {
    cout<<"time:  "<<hour<<":"<<minute<<endl;
}


