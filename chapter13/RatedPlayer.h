//
// Created by xiao on 2017/1/13.
//

#ifndef CHAPTER13_RATEDPLAYER_H
#define CHAPTER13_RATEDPLAYER_H

#include "TableTennisPlayer.h"


class RatedPlayer :public TableTennisPlayer{
private:
    int rating;

public:
    RatedPlayer(const string &name, bool hasTable=false,int r =0);
    RatedPlayer(const TableTennisPlayer &player,int r);
    int Rating()const{return rating;}
    void resetRating(int r){
        rating = r;
    }

};


#endif //CHAPTER13_RATEDPLAYER_H
