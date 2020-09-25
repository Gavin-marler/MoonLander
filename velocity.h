/***********************************************************************
 * Header File:
 *    Velocity : The representation of the lander on the screen
 * Author:
 *    Gavin Marler
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/


#ifndef VELOCITY_H
#define VELOCITY_H

#include <iostream>

/*********************************************
 * Velocity
 * explaination
 *********************************************/
class Velocity
{
private:
   float Dx;
   float Dy;
public:
   Velocity();
   Velocity(float Dx, float Dy);
   float getDx(){return Dx;};
   float getDy(){return Dy;};
   void setDx(float Dx){this->Dx = Dx;};
   void setDy(float Dy){this ->Dy = Dy;};
};

#endif // LANDER_H
