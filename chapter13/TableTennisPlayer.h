//
// Created by xiao on 2017/1/13.
//

#ifndef CHAPTER13_TABLETENNISPLAYER_H
#define CHAPTER13_TABLETENNISPLAYER_H

#include <string>

using std::string;
class TableTennisPlayer {
private:
    string name;
    bool hasTable;
public:
    TableTennisPlayer(const string &name,bool hasTable = false);
    void Name()const;
    bool HasTable()const{ return hasTable;}
    void revertTable(bool v){ hasTable = v;}


};


#endif //CHAPTER13_TABLETENNISPLAYER_H
