
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <string>  
#include <iostream>
#include "Weapon.hpp"
class HumanB {
   private:
    std::string name;
    Weapon* weapon;

   public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    HumanB(const HumanB &otherHumanB);
    HumanB& operator=(const HumanB &otherHumanB);

   public:
    void setWeapon(Weapon& weapon);
    void attack( void );
};

#endif