//
// Created by xiao on 2017/1/18.
//

#ifndef CHAPTER16_SMARTPTR_H
#define CHAPTER16_SMARTPTR_H

#include <string>
#include <iostream>

class Report {
private:
    std::string str;
public:
    Report(const std::string str):str(str){
        std::cout<<str<<" Object create"<<std::endl;
    };
    ~Report(){
        std::cout<<str<<" Object delete"<<std::endl;
    }
    void content()const{
        std::cout<<"content:"<<str<<std::endl;
    }

};


#endif //CHAPTER16_SMARTPTR_H
