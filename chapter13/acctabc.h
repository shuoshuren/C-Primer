//
// Created by xiao on 2017/1/16.
//

#ifndef CHAPTER13_ACCTABC_H
#define CHAPTER13_ACCTABC_H

#include <iostream>
#include <string>

namespace ACCT {


//abstract base class
    class AcctABC {
    private:
        std::string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting {
            std::ios_base::fmtflags flag;
            std::streamsize pr;
        };

        const std::string &FullName() const { return fullName; }

        long AcctNum() const { return acctNum; }

        Formatting SetFormat() const;

        void Restore(Formatting &fm) const;

    public:
        AcctABC(const std::string &s = "nobody", long a = -1, double b = 0.0);

        void Deposit(double amt);

        virtual void WithDraw(double amt) =0;

        double Balance() const { return balance; };

        virtual void ViewAcct() const =0;

        virtual ~AcctABC();


    };

    class IBrass : public AcctABC {
    public:
        IBrass(const std::string &s = "nobody", long a = -1, double b = 0.0) : AcctABC(s, a, b) {};

        virtual void WithDraw(double amt);

        virtual void ViewAcct() const;

        virtual  ~IBrass();
    };

    class IBrassPlus : public ACCT::AcctABC {
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        IBrassPlus(const std::string &name = "NullBody", long a = -1, double balance = 0.0, double ml = 500,
                  double r = 0.11125);

        IBrassPlus(const IBrass &brass, double ml = 500, double r = 0.11125);

        virtual void ViewAcct() const;

        virtual void WithDraw(double amt);

        void ResetMax(double x) { maxLoan = x; };

        void ResetRate(double r) { rate = r; };

        void ResetOwes() { owesBank = 0; };

    };

}


#endif //CHAPTER13_ACCTABC_H
