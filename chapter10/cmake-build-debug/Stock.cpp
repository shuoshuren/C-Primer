//
// Created by xiao on 2017/1/11.
//

#include <iostream>
#include "Stock.h"

Stock::Stock(){
    std::cout<<"default constructor call"<<std::endl;
    company = "";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string &co,long n,double pic){
    std::cout<<"constructor using company:"<<co<<" call"<<std::endl;
    company = co;
    if(n<0){
        n=0;
    }
    shares = n;
    share_val = pic;

    set_total_val();


}
Stock::~Stock(){
    std::cout<<"Stock destroy company:"<<company<<" call"<<std::endl;
}
void Stock::buy(long num,double pic){
    if(num>=0){
        shares += num;
        share_val = pic;
        set_total_val();
    }else{
        std::cout<<"num must>0"<<std::endl;
    }

}
void Stock::sell(long num, double pic){
    using std::cout;
    using std::endl;
    if(num<0){
        cout<<"num must > 0"<<endl;
    }else if(num>shares){
        cout<<"you can't sell more than you have"<<endl;
    }else{
        shares -= num;
        share_val = pic;
        set_total_val();
    }

}
void Stock::update(double pic){
    share_val = pic;
    set_total_val();

}
void Stock::show()const {
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout<<"company:"<<company
        <<" shares:"<<shares<<std::endl;
    cout<<"share price:"<<share_val;
    cout.precision(2);
    cout<<" total worth:"<<total_val<<std::endl;
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);


}

const Stock &  Stock::topval(const Stock &s) const{
    if(s.total_val>total_val){
        return s;
    }else{
        return *this;
    }
}
