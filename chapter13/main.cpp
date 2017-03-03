#include <iostream>
#include "TableTennisPlayer.h"
#include "RatedPlayer.h"
#include "brass.h"
#include "acctabc.h"


void test(){
    TableTennisPlayer player1("android",false);
    TableTennisPlayer player2("xuechao",true);
    player1.Name();
    if(player1.HasTable()){
        std::cout<<" has table"<<std::endl;
    }else{
        std::cout<<" don't has table"<<std::endl;
    }

    player2.Name();
    if(player2.HasTable()){
        std::cout<<" has table"<<std::endl;
    }else{
        std::cout<<" don't has table"<<std::endl;
    }

}

void test2(){
    TableTennisPlayer player1("android",false);
    TableTennisPlayer player2("xuechao",true);
    player1.Name();
    if(player1.HasTable()){
        std::cout<<" has table"<<std::endl;
    }else{
        std::cout<<" don't has table"<<std::endl;
    }

    player2.Name();
    if(player2.HasTable()){
        std::cout<<" has table"<<std::endl;
    }else{
        std::cout<<" don't has table"<<std::endl;
    }
    RatedPlayer ratedPlayer(player1,20);
    ratedPlayer.Name();
    if(player2.HasTable()){
        std::cout<<" has table rating:"<<ratedPlayer.Rating()<<std::endl;
    }else{
        std::cout<<" don't has table rating:"<<ratedPlayer.Rating()<<std::endl;
    }

}

void test3(){
    using std::cout;
    using std::cin;
    using std::endl;

    Brass piggy("piggy",23481,4000.0);
    BrassPlus hoggy("hoggy",37281,3000.0);
    piggy.ViewAcct();
    cout<<endl;

    hoggy.ViewAcct();
    cout<<endl;
    cout<<"Deposit 1000 to hoggy Account:"<<endl;
    hoggy.Deposit(1000.0);
    cout<<"hoggy balance:"<<hoggy.Balance()<<endl;
    cout<<"withDraw 4200 from piggy Account:"<<endl;
    piggy.WithDraw(4200.0);
    cout<<"piggy balance:"<<piggy.Balance()<<endl;
    cout<<"withDraw 4200 from hoggy Account:"<<endl;
    hoggy.WithDraw(4200.0);
    hoggy.ViewAcct();



}

void test4(){

    using std::cout;
    using std::cin;
    using std::endl;
    using namespace ACCT;

    IBrass piggy("piggy",23481,4000.0);
    IBrassPlus hoggy("hoggy",37281,3000.0);
    piggy.ViewAcct();
    cout<<endl;

    hoggy.ViewAcct();
    cout<<endl;
    cout<<"Deposit 1000 to hoggy Account:"<<endl;
    hoggy.Deposit(1000.0);
    cout<<"hoggy balance:"<<hoggy.Balance()<<endl;
    cout<<"withDraw 4200 from piggy Account:"<<endl;
    piggy.WithDraw(4200.0);
    cout<<"piggy balance:"<<piggy.Balance()<<endl;
    cout<<"withDraw 4200 from hoggy Account:"<<endl;
    hoggy.WithDraw(4200.0);
    hoggy.ViewAcct();



}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test4();
    return 0;
}