//
// Created by xiao on 2017/1/17.
//

#ifndef CHAPTER15_Tv_H
#define CHAPTER15_Tv_H


class Tv {

private:
    int state;//on or off
    int volume;
    int maxChannel;
    int channel;
    int mode;
    int input;
public:
    friend class Remote;
    enum { OFF,ON };
    enum {MinVal,MaxVal=20};
    enum{Antenna,Cable};
    enum{TV,DVD};

    Tv(int s = OFF,int mc=125):state(s),volume(5),maxChannel(mc),channel(2),mode(Cable),input(TV){}
    void onoff(){state = (state==ON)?OFF:ON;}
    bool  isOn()const{return state==ON;}
    bool volUp();
    bool volDown();
    void chanUp();
    void chanDown();
    void set_mode(){mode=(mode==Antenna)?Cable:Antenna;}
    void set_input(){input=(input==TV)?DVD:TV;}
    void setting()const;


};

class Remote{
private:
    int mode;//TV or DVD
public:
    Remote(int m=Tv::TV):mode(m){}
    bool volUp(Tv &t){return t.volUp();}
    bool volDown(Tv &t){return t.volDown();}
    void onoff(Tv &t){t.onoff();}
    void chanUP(Tv &t){t.chanUp();}
    void chanDown(Tv &t){t.chanDown();}
    void set_chan(Tv &t,int c){t.channel = c;}
    void set_mode(Tv &t){t.set_mode();}
    void set_input(Tv &t){t.set_input();}

};


#endif //CHAPTER15_Tv_H
