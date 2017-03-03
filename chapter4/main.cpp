#include <iostream>
#include <cstring>
#include <vector>
#include <array>
using namespace std;

/**
 * 测试cin的getline函数
 */
void test_getline(){
    char names[20];
    cout<<"输入姓名："<<endl;
    cin.getline(names,20);
    cout<<"你的姓名为："<<names<<endl;

}

/**
 * 测试cin的get函数
 */
void test_get1(){
    char name[20];
    char addr[20];
    cout<<"enter a name:"<<endl;
    cin.get(name,20);
    cout<<"enter a address:"<<endl;
    cin.get(addr,20); //a problem
    cout<<"name: "<<name<<" addr:"<<addr<<endl;
}

/**
 * 测试cin的get函数
 */
void test_get2(){
    char name[20];
    char addr[20];
    cout<<"enter a name:"<<endl;
    cin.get(name,20);
    cin.get();
    cout<<"enter a address:"<<endl;
    cin.get(addr,20);
    cout<<"name: "<<name<<" addr:"<<addr<<endl;
}


/**
 * 测试cin的get函数
 */
void test_get3(){
    char name[20];
    char addr[20];
    cout<<"enter a name:"<<endl;
    cin.get(name,20).get();
    cout<<"enter a address:"<<endl;
    cin.get(addr,20).get();
    cout<<"name: "<<name<<" addr:"<<addr<<endl;
}

/**
 * 测试string的函数
 */
void test_string(){
    string str;
    cout<<"enter a name:"<<endl;
    getline(cin,str);
    cout<<"name:"<<str<<" size="<<str.size() <<endl;

}

/**
 * 测试原始字符串
 */
void test_raw_string()
{
    cout<<R"("she" is  a term not a she.\n)"<<endl;
    cout<<R"#(2*"(3+5)"=16.)#";
}

/**
 * 定义结构体变量
 */
struct Person{
    string name;
    int age;
    float height;
};

void test_struct(){
    Person person1 {
            "zhangsan",
            20,
            1.75
    };

    cout<<"person name:"<<person1.name<<" age:"<<person1.age<<" height:"<<person1.height<<endl;
}

/**
 * 指针
 */
void test_point(){
    int age = 20;
    string name = "zhangsan";
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"name:"<<name<<" address:"<<&name<<endl;
    *(&age) = 25;
    *(&name) = "lisi";
    cout<<"age:"<<age<<" address:"<<&age<<endl;
    cout<<"name:"<<name<<" address:"<<&name<<endl;
}

/**
 * 使用new分配内存
 */
void use_new(){

    int a = 1000;
    int * p = new int;
    cout<<"a = "<<a<<" address="<<&a<<endl;
    *p = 1002;
    cout<<"p ="<<*p<<" address="<<p<<" size="<<sizeof p<<endl;

}

/**
 * 使用delete释放内存
 */
void use_delete(){

    int * p = new int;
    *p = 1024;
    int age = 20;
    cout<<"p value="<<*p<<" address="<<p<<endl;
    delete p;
    p = &age;

    cout<<"p value="<<*p<<" address="<<p<<endl;
}

/**
 * 用new声明数组
 */
void array_new(){
    int * array = new int[10];

    for (int i = 0; i < 10; ++i) {
        array[i] = 1000 /(i+1);

    }

    cout<<"array address="<<array<<" value"<<*(array+6)<<endl;


    delete [] array;
}

char * getName(){
    char temp[80];
    cout<<"enter a name"<<endl;
    cin>>temp;
    char * pn = new char[strlen(temp)+1];
    strcpy(pn,temp);
    return pn;
}

/**
 * 测试delete和new
 */
void test_delete_new(){
    char * name;
    name = getName();
    cout<<"name:"<<name <<" address:"<<&name<<endl;
    delete [] name;

    cout<<"adress:"<<&name<<endl;

    name = getName();
    cout<<"name:"<<name <<" address:"<<&name<<endl;
    delete [] name;

}

/**
 * 创建vector类对象
 */
void create_vector(){
    vector<int> vi;
    int n=10;
    vector<double> vd(n);

}

/**
 * 创建array对象
 */
void create_array(){
    array<int,5> array;
    array<double,4>darray={1.2,2.3,3.4,4.5};
}





int main() {
    test_delete_new();
    return 0;
}