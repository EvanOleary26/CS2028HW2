#include "Wheel.h"

//Getters
int Wheel::getWheel(){ return ballVal; }

//Setters
//void setWheel(int inVal){ ballVal = inVal; }

//Constructors
Wheel::Wheel() {
    ballVal = (std::rand() % 10) + 1;
}

//Functions
int Wheel::Spin(int wheelSize) {
    ballVal = (std::rand() % wheelSize) + 1;
}