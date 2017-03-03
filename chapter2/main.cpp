#include <iostream>

/**
 * 2.1
 * 进入c++
 *打印“helloworld”
 * #include <iostream>:#include表示源代码在被编译之前，替换或者添加文本
 * iostream:c++的头文件，在c中头文件使用.h作为文件拓展名，在c++旧式风格中保留了.h，新式风格没有拓展名，但是要使用命名空间namespace std
 * 如果使用iostream而不是iostream.h,则应该使用名称空间编译指令来使得iostream中的定义对程序可用：using namespace std;这叫做using 编译指令
 *名称空间可以区分相同名称的函数。
 * @return
 */
void helloworld(){
    using namespace std; //make definition visiable;使用后：std::cout 等效于cout
    std::cout << "Hello, World!" << std::endl; //在c++中，用双引号括起来的一系列字符叫做字符串，<<符号表示该语句将这个字符串发送给cout；该符号指出了信息流动的路径
    std::cout<<std::endl;
    //“<<”可以进行合并输出
    std::cout<<"hello,world!" << std::endl;
    /**
     * endl:重启一行，将屏幕的光标移到下一行开头。诸如endl等对于cout有特殊含义的特殊符号被称为控制符
     * c++中还可以使用c中“\n”表示换行
     */
    cout<<endl;
}

/**
 * 2.2.1
 * 变量的申明
 */
void state_variable(){
    using namespace std;
    //在首次使用变量前声明变量
    int count ;
    count = 25;
    cout<<"count=";
    cout<<count;
    cout<<endl;
    //"="赋值运算符，可以连续使用赋值运算符，赋值从右向左进行
    count = count-1;
    cout<<"now count="<<count<<endl;
}

/**2.3.1
 * 输入函数cin的使用
 */
void test_cin(){
    using namespace std;
    int count;
    cout<<"enter a number\n";
    cin>>count; //cin使用“>>”从输入流中抽取字符
    cout<<"number is :"<< count<<endl;
}

/**
 * 2.3.3
 * 类的简介：
 * 类是用户定义的一种数据类型，描述了一种数据类型的全部属性（包括可以执行的操作），对象是根据这些描述创建的实体
 * 对特定对象执行某些操作，需要给该对象发送一条消息。c++中有两种发送消息的方式：一是类方法（函数调用），二是重新定义运算符
 */

/**
 * 2.4
 * 函数
 * 函数分为：有返回值和没有返回值
 * 函数原型：函数原型对应函数而言相当于变量声明对应变量，指出所涉及到的数据类型。例如：double sqrt(double);
 *
 *
 */

/**
 * 2.4.5在多函数程序中使用using编译指令
 * 让多个函数使用using指令，即将编译指令放到函数外面，放到多个函数前面
 *
 *
 */


int main() {

    test_cin();


    return 0;
}
