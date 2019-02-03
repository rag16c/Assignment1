/*
File: MaybeArmorPiercingStaff.h
Author: Riley Garrison

Created on February 3, 2019 at 4:06 PM
*/

#include <string>
#include <cstdlib>
#include "Weapon.h"

#ifndef MAYBEARMORPIERCINGSTAFF_H
#define MAYBEARMORPIERCINGSTAFF_H

class MaybeArmorPiercingStaff: public Weapon {
 public: 
 MaybeArmorPiercingStaff() : Weapon("Maybe Armor Piercing Staff", 75){}

  virtual ~MaybeArmorPiercingStaff(){};

  virtual double hit(double armor);

};

#endif
