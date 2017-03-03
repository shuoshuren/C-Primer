//
// Created by xiao on 2017/1/13.
//

#include "brass.h"
using std::cout;
using std::string;
using std::endl;

Brass::Brass(const std::string &name, long acctNum, double balance) {
    this->name = name;
    this->acctNum = acctNum;
    this->balance = balance;
}

Brass::~Brass() {

}

/**
 * 存钱
 * @param amt
 */
void Brass::Deposit(double amt) {
    if(amt<0){
        cout<<"deposit not allowed"<<endl;
        cout<<"WithDraw cancel"<<endl;
    }else{
        balance +=amt;
    }
}

/**
 * 取钱
 * @param amt
 */
void Brass::WithDraw(double amt) {
    if(amt<0){
        cout<<"amount mast be positive"<<endl;
    }else if(amt<=balance){
        balance -=amt;
    }else{
        cout<<"amount of " <<amt<<" exceeds your balance."<<endl;
        cout<<"WithDraw cancel"<<endl;
    }
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    cout<<"client:"<<name<<endl;
    cout<<"Account number:"<<acctNum<<endl;
    cout<<"Balance:"<<balance<<endl;

}

BrassPlus::BrassPlus(const std::string &name, long acctNum, double balance, double ml, double r):Brass(name,acctNum,balance) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;

}

BrassPlus::BrassPlus(const Brass &brass, double ml, double r):Brass(brass) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    Brass::ViewAcct();
    cout<<"max loan:"<<maxLoan<<endl;
    cout<<"owesBank:"<<owesBank<<endl;
    cout<<"rate:"<<100*rate<<endl;
}

void BrassPlus::WithDraw(double amt) {
    double balance = Balance();
    if(amt<=balance){
        Brass::WithDraw(amt);
    }else if(amt<balance+maxLoan-owesBank){
        double advance = amt-balance;
        owesBank += advance*(1+rate);
        cout<<"bank advance:"<<advance<<endl;
        cout<<"finance change:"<<advance*rate<<endl;
        Deposit(advance);
        Brass::WithDraw(amt);
    }else{
        cout<<"credit limit exceeded.Transaction cancelled"<<endl;
    }

}

