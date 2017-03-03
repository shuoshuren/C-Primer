//
// Created by xiao on 2017/1/18.
//

#ifndef CHAPTER15_RTTI_H
#define CHAPTER15_RTTI_H

#include <iostream>

using std::cout;
using std::endl;

class A{
private:
    int hold;
public:
    A(int h=0):hold(h){}
    virtual void speak()const{
        cout<<"A speak"<<endl;
    }
    virtual int value()const{
        return hold;
    }
};

class B: public A{
public:
    B(int h=0):A(h){};
    void speak()const{
        cout<<"B speak"<<endl;
    }
    virtual void say()const{
        cout<<"B say value:"<<value()<<endl;
    }

};

class C:public B{
private:
    char ch;
public:
    C(int h=0,char c='A'):B(h),ch(c){}
    void speak()const{
        cout<<"C speak"<<endl;
    }
    void say()const{
        cout<<"C say value:"<<value()<<" char:"<<ch<<endl;
    }

};



#endif //CHAPTER15_RTTI_H
