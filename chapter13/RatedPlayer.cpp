//
// Created by xiao on 2017/1/13.
//

#include "RatedPlayer.h"

RatedPlayer::RatedPlayer(const string &name, bool hasTable,int r):TableTennisPlayer(name,hasTable){
    rating = r;
}

RatedPlayer::RatedPlayer(const TableTennisPlayer &player,int r):TableTennisPlayer(player){
    rating = r;
}
