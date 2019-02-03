/*
File: CommonHammer.h
Author: Riley Garrison

Created on February 3, 2019, 4:59 AM

*/

#include <string>
#include "Weapon.h"

#ifndef COMMONHAMMER_H
#define COMMONHAMMER_H


class CommonHammer : public Weapon {
 public:
 CommonHammer() : Weapon("Common hammer", 25) {
  }

  virtual ~CommonHammer();

  virtual double hit(double armor);

};

#endif
