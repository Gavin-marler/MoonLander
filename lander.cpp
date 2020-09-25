/***********************************************************************
 * Implementation File:
 *    LANDER : A class representing the Lander
 * Author:
 *    Gavin Marler
 * Summary:
 *    Everything you needed to know about the ground but were afraid to ask
 ************************************************************************/

#include "lander.h"

void Lander :: applyGravity(float gravity)
{
   velocity.setDy(velocity.getDy() - gravity);
}

void Lander :: applyThrustLeft()
{
   if (getFuel() > 0)
   {
      velocity.setDx(velocity.getDx() + 0.1);
      setFuel(getFuel() - 1);
   }
}

void Lander :: applyThrustRight()
{
   if (getFuel() > 0)
   {
      velocity.setDx(velocity.getDx() - 0.1);
      setFuel(getFuel() - 1);
   }
}

void Lander :: applyThrustBottom()
{
   if (getFuel() > 0)
   {
      velocity.setDy(velocity.getDy() + 0.3);
      setFuel(getFuel() - 3);
   }
}

void Lander :: advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}

void Lander :: draw()
{
   drawLander(point);
}

Lander :: Lander()
{
   setLanded(false);
   setAlive(true);
   setFuel(500);
   point.setX(0);
   point.setY(200);
}
