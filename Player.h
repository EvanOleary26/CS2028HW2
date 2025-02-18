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
    int getWheel();

    //Setters
    void setMoney(int inMoney);
    void setWheel(int inWheel);

    //Getters


//Setters

    
    //Constructors
    Player();
    Player(int inMoney);

    int spinWheel(int min,int max);
};









#endif