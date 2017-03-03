//
// Created by xiao on 2017/1/11.
//

#ifndef CHAPTER10_STOCK_H
#define CHAPTER10_STOCK_H

#include <string>


class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_total_val(){
        total_val = share_val*shares;
    }

public:
    Stock();
    Stock(const std::string &co,long n=0,double pic = 0.0);
    ~Stock();
    void buy(long num,double pic);
    void sell(long num, double pic);
    void update(double pic);
    void show()const;
   const Stock &  topval(const Stock &s) const;

};


#endif //CHAPTER10_STOCK_H
