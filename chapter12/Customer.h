//
// Created by xiao on 2017/1/13.
//

#ifndef CHAPTER12_CUSTOMER_H
#define CHAPTER12_CUSTOMER_H


class Customer {

private:
    long arrive;//何时到达
    int processTime;//

public:
    Customer(){
        arrive = processTime = 0;
    }
    void set(long when);
    long when()const{ return arrive;}
    int ptime()const{return processTime;}

};

typedef Customer Item;


#endif //CHAPTER12_CUSTOMER_H
