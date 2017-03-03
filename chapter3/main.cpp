#include <iostream>
#include <climits>
using namespace std;

/**
 * 输出四种整形的最大值，最小值，和对应类型占据内存大小
 */
void number_max_min_byte(){
    short n_short_max = SHRT_MAX;
    int n_int_max = INT_MAX;
    long n_long_max = LONG_MAX;
    long long n_llong_max = LLONG_MAX;
    cout<<"short byte:"<< sizeof n_short_max<< " short max:"<<n_short_max << " short min:"<<SHRT_MIN<<endl;
    cout<<"int byte:"<< sizeof n_int_max<< " int max:"<<n_int_max << " int min:"<<INT_MIN<<endl;
    cout<<"long byte:"<< sizeof(n_long_max)<< " long max:"<<n_long_max << " long min:"<<LONG_MIN<<endl;
    cout<<"long long byte:"<< sizeof(n_llong_max)<< " long long max:"<<n_llong_max << " long long min:"<<LLONG_MIN<<endl;

}
/**
 * c++中使用大括号“{}”进行变量初始化
 */
void init(){
    //使用大括号进行初始化，等号“=”可以写可以不写
    int a = {10};
    int b {12};
    cout<<"a="<<a<<",b="<<b<<endl;
    //大括号内可以不包含任何值，在这种情况下，变量初始化为零
    int c = {};
    int d {};
    cout<<"c="<<c<<",d="<<d<<endl;
}

int main() {

    init();

    return 0;
}