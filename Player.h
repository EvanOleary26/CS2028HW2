#ifndef __PLAYER_HPP
#define __PLAYER_HPP

#include "Wheel.h"


class Player{
    private:
        int money;
        Wheel wheel;
    public:
    //Getters
    int getMoney();
    int getPlayerWheel();

    //Setters
    void setMoney(int inMoney);
    void setPlayerWheel(int inWheel);

    //Constructors
    Player();
    Player(int inMoney);

    void spinWheel(int min,int max);
};









#endif