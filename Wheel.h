#ifndef __WHEEL_HPP
#define __WHEEL_HPP

#include <ctime>
#include <cstdlib>

class Wheel{
    private:
        int ballVal;
    public:
    //Getters
    int getWheel();

    //Setters
    void setWheel(int inVal){ ballVal = inVal; }
    
    //Constructors
    Wheel(); //default constructor
    Wheel(int min, int max); //modified constructor

    //Functions
    int Spin(int min, int max);



};









#endif
