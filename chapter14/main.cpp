#include <iostream>
#include "stacktp.h"

using namespace std;

/**
 * 测试模板类
 */
void testTemplate(){
    Stack<string> st;


    string string1 = "c++";
    string string2 = "android";
    st.push(string1);
    st.push(string2);
    while (!st.isEmpty()){
        string temp;
        if(st.pop(temp)){
            cout<<"pop success:"<<temp<<endl;
        }else{
            cout<<"pop failed"<<endl;
        }
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    testTemplate();
    return 0;
}