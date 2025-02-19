#include "Wheel.h"

//Getters
int Wheel::getWheel(){ return ballVal; }

//Setters
void Wheel::setWheel(int inWheel){ ballVal = inWheel; }

//Constructors
Wheel::Wheel() { //default constructor
    ballVal = (std::rand() % 10) + 1;
}

Wheel::Wheel(int min, int max) { //modified constructor
    ballVal = (std::rand() % max) + min;
}

//Functions 
void Wheel::Spin(int min,int max) {
    ballVal = (std::rand() % max) + min;
}
