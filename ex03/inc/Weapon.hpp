
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>  
#include <iostream>


class Weapon {
   private:
    std::string type;

   public:
    Weapon();
    Weapon(std::string name);
    ~Weapon();
    Weapon(const Weapon &otherWeapon);
    Weapon& operator=(const Weapon &otherWeapon);

    public:
    const std::string& getType( void ) const;
    void setType( std::string type );
};

#endif