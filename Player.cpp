#include "Player.h"

//Getters
int Player::getMoney(){ return money; }
int Player::getWheel(){ return wheel.getWheel(); }

//Setters
void Player::setMoney(int inMoney){ money = inMoney; }
void Player::setWheel(int inWheel){ wheel.setWheel(inWheel); }

//Constructors
Player::Player() {
    money = 500;
}

Player::Player(int inMoney) {
    money = inMoney;
}

//Functions
int Player::spinWheel(int min, int max){
return wheel.Spin(min,max);
}