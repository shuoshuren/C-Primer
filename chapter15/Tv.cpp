//
// Created by xiao on 2017/1/17.
//

#include "Tv.h"
#include <iostream>

bool Tv::volUp() {
    if(volume<MaxVal){
        volume++;
        return true;
    }else{
        return false;
    }
}

bool Tv::volDown() {
    if(volume<MinVal){
        volume--;
        return true;

    }else{
        return false;
    }
}
void Tv::chanUp() {
    if(channel<maxChannel){
        channel++;

    }else{
        channel=1;
    }
}

void Tv::chanDown() {
    if(channel>1){
        channel--;
    }else{
        channel = maxChannel;
    }
}

void Tv::setting() const {
    using std::cout;
    using std::endl;
    cout<<"TV is "<<(state==OFF?"OFF":"ON")<<endl;
    if(state==ON){
        cout<<"Volume setting="<<volume<<endl;
        cout<<"Channel setting="<<channel<<endl;
        cout<<"Mode="<<(mode==Antenna?"antenna":"cable")<<endl;
        cout<<"Input="<<(input ==TV?"TV":"DVD")<<endl;

    }


}
