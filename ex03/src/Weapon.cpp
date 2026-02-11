#include "../inc/Weapon.hpp"

Weapon::Weapon() : type("Unknown")
{
    std::cout << "Weapon of type " << type << " created." << std::endl;
}

Weapon::Weapon(std::string name) : type(name)
{
    std::cout << "Weapon of type " << type << " created." << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon of type " << type << " destroyed." << std::endl;
}

Weapon::Weapon(const Weapon &otherWeapon)
{
    *this = otherWeapon;
    std::cout << "Weapon of type " << otherWeapon.type << " copied." << std::endl;
}

Weapon& Weapon::operator=(const Weapon &otherWeapon)
{
    if (this != &otherWeapon)
    {
        this->type = otherWeapon.type;
    }
    return *this;
}

const std::string& Weapon::getType( void ) const
{
    return type;
}

void Weapon::setType( std::string type )
{
    this->type = type;
}

