/*
File: CommonHammer.cpp
Name: Riley Garrison

Created on February 3, 2019 at 5:26 AM
*/

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
  if ( armor < 30 )
    return hitPoints;
  else
    return 0;
}
