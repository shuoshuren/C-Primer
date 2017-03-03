//
// Created by xiao on 2017/1/16.
//

#include "acctabc.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ios_base;
using ACCT::AcctABC;
using ACCT::IBrass;
using ACCT::IBrassPlus;


AcctABC::AcctABC(const std::string &s, long a, double b) {
    fullName = s;
    acctNum = a;
    balance = b;
}

void AcctABC::Deposit(double amt) {
    if(amt<0){
        cout<<"deposit not allowed"<<endl;
        cout<<"WithDraw cancel"<<endl;
    }else{
        balance +=amt;
    }
}

void AcctABC::WithDraw(double amt) {
    balance -=amt;
}

AcctABC::Formatting AcctABC::SetFormat() const {
    Formatting f;
    f.flag = cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting &fm) const {
    cout.setf(fm.flag,ios_base::floatfield);
    cout.precision(fm.pr);
}

AcctABC::~AcctABC() {

}

void IBrass::WithDraw(double amt) {
    if(amt<0){
        cout<<"amount mast be positive"<<endl;
    }else if(amt<=Balance()){

        AcctABC::WithDraw(amt);
    }else{
        cout<<"amount of " <<amt<<" exceeds your balance."<<endl;
        cout<<"WithDraw cancel"<<endl;
    }
}

void IBrass::ViewAcct() const {
    Formatting f = SetFormat();
    cout<<"Brass client:"<<FullName()<<endl;
    cout<<"Account number:"<<AcctNum()<<endl;
    cout<<"Balance:"<<Balance()<<endl;
    Restore(f);

}

IBrass::~IBrass() {

}

IBrassPlus::IBrassPlus(const std::string &name,long acctNum ,double balance ,double ml,double r):AcctABC(name,acctNum,balance){
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}
IBrassPlus::IBrassPlus(const IBrass &brass,double ml,double r):AcctABC(brass){
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}
void IBrassPlus::ViewAcct() const{

    Formatting f = SetFormat();
    cout<<"BrassPlus client:"<<FullName()<<endl;
    cout<<"Account number:"<<AcctNum()<<endl;
    cout<<"Balance:"<<Balance()<<endl;
    cout<<"max loan:"<<maxLoan<<endl;
    cout<<"owesBank:"<<owesBank<<endl;
    cout<<"rate:"<<100*rate<<endl;
    Restore(f);
}
void IBrassPlus::WithDraw(double amt){
    Formatting f = SetFormat();
    double balance = Balance();
    if(amt<=balance){
        AcctABC::WithDraw(amt);
    }else if(amt<balance+maxLoan-owesBank){
        double advance = amt-balance;
        owesBank += advance*(1+rate);
        cout<<"bank advance:"<<advance<<endl;
        cout<<"finance change:"<<advance*rate<<endl;
        Deposit(advance);
        AcctABC::WithDraw(amt);
    }else{
        cout<<"credit limit exceeded.Transaction cancelled"<<endl;
    }
    Restore(f);
}


