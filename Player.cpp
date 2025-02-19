#include "Player.h"

//Getters
int Player::getMoney(){ return money; }
int Player::getPlayerWheel(){ return wheel.getWheel(); }

//Setters
void Player::setMoney(int inMoney){ money = inMoney; }
void Player::setPlayerWheel(int inWheel){ wheel.setWheel(inWheel); }

//Constructors
Player::Player() {  //Default Constructor
    money = 500;
}

Player::Player(int inMoney) {   
    money = inMoney;
}

//Functions
void Player::spinWheel(int min, int max){
    wheel.Spin(min,max);
}