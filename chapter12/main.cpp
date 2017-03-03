#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StringBad.h"
#include "String.h"
#include "Queue.h"
#include "Customer.h"

const int ArSize =10;
const int MaxLen = 81;

void callme1(StringBad &rsb){
    cout<<"call ref: "<<rsb<<endl;
}

void callme2(StringBad sb){
    cout<<"call value: "<<sb<<endl;
}

/**
 * 有缺陷的String类
 */
void test_stringbad(){
    StringBad handerline1("headerline1");
    StringBad handerline2("headerline2");
    cout<<"headerline1: "<<handerline1<<endl;
    cout<<"headerline2: "<<handerline2<<endl;
    callme1(handerline1);
    cout<<"headerline1: "<<handerline1<<endl;
    callme2(handerline2);
    cout<<"headerline2: "<<handerline2<<endl;
    StringBad headerline3;
    headerline3 = handerline1;
    cout<<"headerline3: "<<headerline3<<endl;

}

/**
 * 好的String类
 */
void test_string(){
    using std::cin;
    using std::cout;
    using std::endl;
    String name;
    cout<<"enter a name;"<<endl;
    cin>>name;

    cout<<"name:"<<name<<endl;
    cout<<"please enter "<<ArSize<<"name to Array"<<endl;
    String sayings[ArSize];
    char temp[MaxLen];
    int i=0;
    for (i=0;i<ArSize;i++){
        cout<<i+1<<":";
        cin.getline(temp,MaxLen);
        if(!cin || temp[0] == '\0' ){
            break;
        }else{
            sayings[i] = temp;
        }
    }
    int total = i;
    if(total>0){
        cout<<"here is you saying:"<<endl;
        for (int j = 0; j < total; ++j) {
            cout<<sayings[j][0]<<":"<<sayings[j]<<endl;
        }
    }else{
        cout<<"you say nothing"<<endl;
    }

}

const int min_per_hr = 60;
bool newCustomer(double x){
    return std::rand() *x / RAND_MAX<1;
}

/**
 * 测试队列
 */
void bank(){
    std::srand(std::time(0));
    cout<<"enter max num of queue:"<<endl;
    int qs;
    cin>>qs;
    Queue lines(qs);
    Item temp;
    int cycleLimit = min_per_hr*6;
    int turnAways = 0;
    int customers = 0;
    int waitTime = 0;
    long sum_lines = 0;
    long served = 0;
    for (int cycle = 0; cycle < cycleLimit; ++cycle) {
        if(newCustomer(min_per_hr)){
            if(lines.isFull()){
                turnAways++;
            }else{
                customers++;
                temp.set(cycle);
                lines.enqueue(temp);
            }
        }
        if(waitTime<=0&&!lines.isEmpty()){
            lines.dequeue(temp);
            waitTime = temp.ptime();

            served++;
        }

        if(waitTime>0){
            waitTime++;
        }
        sum_lines += lines.queueCount();
    }
    if(customers>0){
        cout<<"accepted:"<<customers<<endl;
        cout<<"served:"<<served<<endl;
        cout<<"turnaways:"<<turnAways<<endl;
    }else{
        cout<<"no customer"<<endl;
    }
    cout<<"DONE!"<<endl;

}



int main() {

    bank();

    return 0;
}