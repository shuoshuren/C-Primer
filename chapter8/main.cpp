#include <iostream>
using namespace std;

/**
 * 内联函数---平方
 * @param x
 * @return
 */
inline double squre(double x){
    return x*x;
}

/**
 * 测试内联函数
 */
void test_inline(){
    int a = squre(3);
    int b = squre(5);
    cout<<"a="<<a<<",b="<<b<<endl;
}

/**
 * 测试引用变量
 */
void test_ref(){
    int age = 10;
    int & mAge = age;
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"mAge:"<<mAge<<" address:"<<&mAge<<endl;
    mAge++;
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"mAge:"<<mAge<<" address:"<<&mAge<<endl;

}

/**
 * 测试引用变量
 */
void test_ref2(){
    int age = 10;
    int & mAge = age;
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"mAge:"<<mAge<<" address:"<<&mAge<<endl;
    int a = 20;
    mAge = a;
    cout<<"a:"<<a<<" address:"<<&a<<endl;
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"mAge:"<<mAge<<" address:"<<&mAge<<endl;
}

/**
 * 引用传递交换两个变量的值
 * @param a
 * @param b
 */
void swpper(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}


/**
 * 测试交换
 */
void test_ref3(){
    int a =3.0,b=5.0;
    cout<<"a="<<a<<",b="<<b<<endl;
    swpper( a, b);
    cout<<"a="<<a<<",b="<<b<<endl;
}

/**
 * 按值传递的计算立方
 * @param a
 * @return
 */
float curb(float a){
    a*=a*a;
    return a;
}

/**
 * 按引用传递的计算立方
 * @param a
 * @return
 */
float curb_ref(float &a){

    a*=a*a;
    return a;
}

/**
 * 测试引用传递和按值传递
 */
void test_ref4(){
    float a = 3.5f;
    float result;
    result = curb(a);
    cout<<result<<" value="<< a<<endl;
    result = curb_ref(a);
    cout<<result<<" value="<< a<<endl;
}

int add(int a,int b=1);
int add(int a,int b){
    return a+b;
}

/**
 * 测试默认参数
 */
void test_default_args(){
    int a = 10;
    int result;
    result = add(a);
    cout<<"result="<<result<<endl;
    result = add(a,2);
    cout<<"result="<<result<<endl;
}

/**
 * 获取数字的前几位
 * @param num
 * @param ct
 * @return
 */
int left(unsigned long num, unsigned ct){
    unsigned long temp = num;
    if(num == 0 || ct == 0){
        return 0;
    }
    int flag = 1;
    while(temp/=10){
        flag ++;
    }
    if(flag>ct){
        flag = flag -ct;
        while (flag--){
            num = num/10;
        }
        return num;

    }else{
        return num;
    }
}

char * left(const char * res,int n){
    if(n<0) n=0;
    char * p = new char[n+1];
    int i=0;
    for( i=0;i<n&&res[i];i++){
        p[i] = res[i];
    }
    while(i<=n){
        p[i++] = '\0';
    }


    return p;

}

/**
 * 测试函数重载
 */
void test_override(){
    cout<<"enter a num;"<<endl;
    int num;
    cin>>num;
    char res[80] = "android";

    cout<<"enter try to left num:"<<endl;
    int rc;
    cin>>rc;

    int result;
    result= left(num,rc);
    char * p;
    p = left(res,rc);
    cout<<"num:"<<num<<" rc:"<<rc<<" result="<<result<<endl;
    cout<<"res:"<<res<<" rc:"<<rc<<" res=";
    for (int i = 0; i < rc; ++i) {
        cout<<*(p+i);
    }
    cout<<endl;
    delete [] p;


}

/**
 * 模板函数
 * @tparam T
 * @param a
 * @param b
 */
template<typename T>
void swaper(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}


/**
 * 显式模板函数
 * @param a
 * @param b
 */
template<> void swaper<int>(int &a,int &b){
    int temp;
    temp = a*2;
    a = b*2;
    b = temp;
}

/**
 * 测试模板函数
 */
void test_template(){
    int a = 10,b=15;
    cout<<"a= "<<a<<" b="<<b<<endl;
    swaper(a,b);
    cout<<"a= "<<a<<" b="<<b<<endl;

    float c = 10.5f,d=15.5f;
    cout<<"c= "<<c<<" d="<<d<<endl;
    swaper(c,d);
    cout<<"c= "<<c<<" d="<<d<<endl;
}

/**
 * 使用decltype判断类型
 * @tparam T1
 * @tparam T2
 * @param x
 * @param y
 */
template <typename T1,typename T2>
void add_print(T1 x,T2 y){
    typedef decltype(x+y) xyType;
    xyType result = x+y;
    cout<<"x"<<x<<"+"<<y<<"="<<result<<endl;
};

/**
 * 测试decltype
 */
void test_decltype(){
    int a = 10;
    float b = 20.5;
    add_print(a,b);
}

/**
 * 后置返回类型
 */
template<typename T1,typename T2>
auto mult(T1 a,T2 b)-> decltype(a*b){
    return a*b;
};

/**
 * 测试后置返回类型
 */
void test_auto_decltype(){
    int a = 20;
    float b = 3.14;
    cout<<"result="<< mult(a,b)<<endl;

}






int main() {
    std::cout << "Hello, World!" << std::endl;
    test_auto_decltype();
    return 0;
}