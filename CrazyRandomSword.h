/*
File: CrazyRandomSword.h
Author: Riley Garrison

Created on February 3, 2019 at 5:59 AM
*/

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
 public:
 CrazyRandomSword() : Weapon("Crazy Random Sword", rand()%94 +7) {
  }

  virtual ~CrazyRandomSword() {};

  virtual double hit(double armor);

};

#endif
