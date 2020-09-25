/***********************************************************************
 * Header File:
 *    Lander : The representation of the lander on the screen
 * Author:
 *    Gavin Marler
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include <iostream>
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

/*********************************************
 * LANDER
 * explaination
 *********************************************/
class Lander
{
private:
   Point point;
   Velocity velocity;
   int fuel = 500;
   float gravity = 0.1;
   bool landed;
   bool alive;
   
public:
   Lander();
   //getters
   Point getPoint() const {return point;};
   Velocity getVelocity() const {return velocity;};
   bool isAlive() {return alive;};
   bool isLanded() {return landed;};
   int getFuel() {return fuel;};
   bool canThrust() {return true;};
   //setters
   void setLanded(bool landed) {this->landed = landed;};
   void setAlive(bool alive) {this->alive = alive;};
   void setFuel(int fuel) {this->fuel = fuel;};
   //appliers
   void applyGravity(float gravity);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();
   //misc
   void advance();
   void draw();
};

#endif // LANDER_H
