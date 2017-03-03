#include <iostream>
#include "cmake-build-debug/Stock.h"

/**
 * ???????????
 */
void test_object(){
    std::cout << "Hello, World!" << std::endl;
    using std::cout;

    Stock stock1("dianxin",8,20.0);
    stock1.buy(15,30.5);

    Stock stock2 = Stock("yidong",10,30.0);
    stock2.sell(5,20.5);
    stock1.update(40.5);
    stock2.update(52.4);

    const Stock stock3 = Stock("liantong",15,20);
    stock3.show();

    Stock topStock = stock1.topval(stock2);
    cout<<"top stock:"<<std::endl;
    topStock.show();

    stock1.show();
    stock2.show();
}

/**
 * ???????????
 */
void test_object_array(){
    Stock array [4] = {
            Stock("company-1",20,30),
            Stock("company-2",15,20),
            Stock("company-3",40,30.3),
            Stock("company-4",25,26.7)
    };
    Stock & topStock = array[0];
    for(int i=1;i<4;i++){
        topStock = topStock.topval(array[i]);
    }

    std::cout<<"×îÖµÇ®µÄ£º"<<std::endl;
    topStock.show();

}


int main() {

    test_object_array();




    return 0;
}