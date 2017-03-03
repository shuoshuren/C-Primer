#include <iostream>
#include <fstream>
#include "time.h"

/**
 * 使用函数进行加法运算
 */
void test_sum(){
    Time time1 = Time(14,7);
    Time time2 = Time(3,59);
    time1.addMin(-289);
    Time sumTime = time1.sum(time2);

    time1.show();
    time2.show();
    sumTime.show();
}

/**
 * 使用算术运算符重载
 */
void test_operator(){
    Time time1 = Time(14,7);
    Time time2 = Time(3,59);
    time1.addMin(289);
    Time sumTime = time1+time2;

    Time time3 = time1.operator-(time2);
    Time time4 = time2*2;

    time1.show();
    time2.show();
    time3.show();
    time4.show();
    sumTime.show();
}

/**
 * 友元函数 *
 */
void test_friend(){
    Time time1 = Time(14,7);
    Time time2 = Time(3,59);

//    Time time3 = operator*(2,time2);
    Time time3 = 2*time2;
    Time time4 = time2*2;

    time1.show();
    time2.show();
    time4.show();
    time3.show();

}

/**
 * 测试重载<<进行输出第一个版本
 */
void test_friend_out1(){
    Time time1 = Time(15,43);
    std::cout<<time1;
//    std::cout<<time1<<" now "; //error
}

/**
 * 测试重载<<进行输出第二个版本
 */
void test_friend_out2(){
    Time time = Time(15,59);
    std::ofstream file;
    file.open("time.txt");
    file<<time<<" today "<<std::endl;

    file.close();

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    test_friend_out2();
    return 0;
}