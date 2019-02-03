/*
File: MaybeArmorPiercingStaff.cpp
Name: Riley Garrison

Created on February 3, 2019 at 4:11 PM
*/

#include "MaybeArmorPiercingStaff.h"
#include <ctime>
#include <cstdlib>


double MaybeArmorPiercingStaff:hit(double armor) {
  srand(time(NULL));

  if ( armor < hitPoints/2 ) {
    int armorIgnore = rand()%(int)(armor/2);
    double damage = hitPoints - (armor-armorIgnore);
    return damage;
  }
  else {
    int armorIgnore = rand()%(int)(armor/4);
    double damage = hitPoints - (armor - armorIgnore);
    
    if ( damage > 0 )
      return damage;
    else
      return 0;
      }


}
