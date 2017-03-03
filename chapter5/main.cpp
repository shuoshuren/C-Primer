#include <iostream>
using namespace std;

/**
 * 使用原始的cin进行单个字符的输入
 */
void test_cin(){
    int count = 0;
    cout<<"enter char,enter # quit:"<<endl;
    char ch;
    cin>>ch;
    while (ch != '#'){
        cout<<ch;
        cin>>ch;
        count++;
    }
    cout<<" enter "<<count<<" char"<<endl;
}

/**
 * 使用cin.get(char)函数实现单个字符的输入
 */
void test_cin_get(){
    int count = 0;
    cout<<"enter char,enter # quit:"<<endl;
    char ch;
   cin.get(ch);
    while (ch != '#'){
        cout<<ch;
        cin.get(ch);
        count++;
    }
    cout<<" enter "<<count<<" char"<<endl;
}




int main() {

    test_cin();
    return 0;
}