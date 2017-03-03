#include <iostream>
using namespace std;

/**
 * 加法
 * @param x
 * @param y
 * @return
 */
int sum(int x,int y){
    return x+y;
}

/**
 * 乘法
 * @param x
 * @param y
 * @return
 */
int mult(int x,int y){
    return x*y;
}

/**
 * 计算
 * @param x 要计算的值
 * @param pf  函数指针，计算的方法
 * @return
 */
double calculate(int x,int y,int (*pf)(int,int)){
    double result;
//    result = pf(x,y);
    result = (*pf)(x,y);
    return result;
}

/**
 * 使用函数指针
 */
void test(){
    int x = 10,y = 5;
    double result;
    result = calculate(x,y,mult);
    cout<<"result:"<<result<<endl;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}