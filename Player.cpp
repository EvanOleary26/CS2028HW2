#include "Player.h"

 //Getters
 int Player::getMoney(){ return money; }

 //Setters
 void Player::setMoney(int inVal){ money = inVal; }
 
 //Constructors
 Player::Player() {
     money = 500;
 }

 Player::Player(int inVal) {
     money = inVal;
 }