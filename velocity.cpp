/***********************************************************************
 * Implementation File:
 *    VELOCITY : A class representing the Lander
 * Author:
 *    Gavin Marler
 * Summary:
 *    Everything you needed to know about the ground but were afraid to ask
 ************************************************************************/

#include "velocity.h"

Velocity :: Velocity()
{
   setDx(0);
   setDy(0);
}

Velocity :: Velocity(float Dx, float Dy)
{
   setDy(Dx);
   setDy(Dy);
}
