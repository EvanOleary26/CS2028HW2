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

    //Setters
    void setMoney(int inVal);
    
    //Constructors
    Player();
    Player(int inVal);
};









#endif