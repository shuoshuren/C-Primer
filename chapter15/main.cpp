#include <iostream>
#include "Tv.h"
#include "queuetp.h"
#include <cstdlib>
#include <stdexcept>
#include "rtti.h"
#include <ctime>
#include <typeinfo>

/**
 * 测试友元类
 */
void testFriend(){
    using std::cout;
    Tv s42;
    cout<<"initial setting for 42 \"TV:\n";
    s42.setting();
    s42.onoff();
    s42.chanUp();
    cout<<"\nAdjusted setting for 42\"TV:\n";


    Remote grey;
    grey.set_chan(s42,10);
    grey.volUp(s42);
    cout<<"42 setting after using remote:\n";
    s42.setting();

    Tv s58(Tv::ON);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout<<"58 setting:\n";
    s58.setting();
}

/**
 * 测试模板嵌套类
 */
void testTemplate(){
    using std::cout;
    using std::endl;
    using std::string;
    using std::cin;

    QueueTP<string> cs(5);
    string temp;
    while (!cs.isFull()){
        cout<<"enter a name:"<<endl;
        cin>>temp;
        cs.enqueue(temp);
    }
    cout<<"this queue is full,count:"<<cs.queueCount()<<endl;

    while(!cs.isEmpty()){
        cs.dequeue(temp);
        cout<<"content:"<<temp<<endl;
    }
}

/**
 * 使用程序终止防止异常
 * @param x
 * @param y
 * @return
 */
double hmean(double x,double y){
    if((x+y==0)){
        std::cout<<"arguments is error"<<std::endl;
        std::abort();
    }

    return 2.0*x*y/(x+y);
}

/**
 * 使用返回值判读程序是否异常
 * @param x
 * @param y
 * @param z
 * @return
 */
bool hmean(double x,double y,double &z){
    if((x+y==0)){
        z=0.0;
        return false;
    }

    z = 2.0*x*y/(x+y);
    return true;
}

/**
 * 使用throw抛出异常，异常是字符串
 * @param x
 * @param y
 * @return
 */
double hmean2(double x,double y){
    if((x+y==0)){
        throw "arguments is error";
    }

    return 2.0*x*y/(x+y);
}

void test_error(){
    double x= 5;
    double y= 8;
    double  z = hmean(x,y);
    std::cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<std::endl;

    x = 10;
    y=-10;
    bool flag = hmean(x,y,z);
    if(flag){
        std::cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<std::endl;
    }else{
        std::cout<<"arguments is error z:"<<z<<std::endl;
    }

    x = 10;
    y =-10;
    try {
        z = hmean2(x,y);
        std::cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<std::endl;
    }catch(const char * error){
        std::cout<<"error:"<<error<<std::endl;
    }

}


/**
 * 测试bad_alloc异常
 */
void test_bad_alloc(){
    double *buffer;
    try {
        buffer  = new double[20000*1000000];
    }catch(std::bad_alloc &error){
        std::cout<<"error:"<<error.what()<<std::endl;

    }
    delete[] buffer;

}

/**
 * 测试空指针和new
 */
void test_null_point(){
    double *buffer;
    try {
        buffer  = new(std::nothrow) double[100000000000];
    }catch(std::bad_alloc &error){
        std::cout<<"error:"<<error.what()<<std::endl;

    }
    delete[] buffer;
}

A * getOne(){
    A *p;
    switch (std::rand()%3){
        case 0:
            p = new A(std::rand()%100);
            break;
        case 1:
            p = new B(std::rand()%100);
            break;
        case 2:
            p = new C(std::rand()%100,'A'+ std::rand()%26);
            break;
    }
    return p;
}

/**
 * 测试RTTI
 */
void test_dynamic_cast(){
    std::srand(std::time(0));
    A *pa;
    B *pb;
    for (int i = 0; i < 5; ++i) {
        pa = getOne();
        pa->speak();
        if(pb = dynamic_cast<B *>(pa)){
            pb->say();
        }
        if(typeid(C) == typeid(*pa)){
            cout<<"type:"<< typeid(*pa).name()<<endl;
        }
        cout<<endl;
    }


}

int main() {

    test_dynamic_cast();
    return 0;
}