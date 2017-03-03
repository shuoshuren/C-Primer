//
// Created by xiao on 2017/1/13.
//

#include <iostream>
#include "TableTennisPlayer.h"

TableTennisPlayer::TableTennisPlayer(const string &name, bool hasTable) {
    this->name = name;
    this->hasTable = hasTable;
}

void TableTennisPlayer::Name() const {
    std::cout<<"name:"<<name;
}
