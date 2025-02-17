#include "Wheel.h"

//Getters
int Wheel::getWheel(){ return ballVal; }

//Setters
void Wheel::setWheel(int inVal){ ballVal = inVal; }

//Constructors
Wheel::Wheel() { //default constructor
    ballVal = (std::rand() % 10) + 1;
}

Wheel::Wheel(int min, int max) { //modified constructor
    ballVal = (std::rand() % max) + min;
}

//Functions 

//int Wheel::Spin(int min,int max) { //do we need this if we have the modified constructor?
//    ballVal = (std::rand() % max) + 1;
//}
