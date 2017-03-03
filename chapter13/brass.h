//
// Created by xiao on 2017/1/13.
//

#ifndef CHAPTER13_BRASS_H
#define CHAPTER13_BRASS_H

#include <iostream>

class Brass {
private:
    std::string name;
    long acctNum;
    double balance;

public:
    Brass(const std::string &name="NullBody",long acctNum = -1,double balance = 0.0);
    void Deposit(double amt);
    virtual void WithDraw(double amt);
    double Balance()const;
    virtual void ViewAcct() const;
    virtual ~Brass();


};

class BrassPlus:public Brass{

private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &name="NullBody",long acctNum = -1,double balance = 0.0,double ml=500,double r=0.11125);
    BrassPlus(const Brass &brass,double ml=500,double r=0.11125);
    virtual  void ViewAcct() const;
    virtual void WithDraw(double amt);
    void ResetMax(double x){maxLoan= x;};
    void ResetRate(double r){rate = r;};
    void ResetOwes(){owesBank = 0;};
};


#endif //CHAPTER13_BRASS_H
