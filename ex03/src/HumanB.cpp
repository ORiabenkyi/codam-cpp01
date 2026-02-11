
#include "../inc/HumanB.hpp"

HumanB::HumanB() : name("sharp mind"), weapon(nullptr)
{
    std::cout << "HumanB " << name << " created." << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
    std::cout << "HumanB " << name << " created." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << name << " destroyed." << std::endl;
}

HumanB::HumanB(const HumanB &otherHumanB)
{
    *this = otherHumanB;
    std::cout << "HumanB " << otherHumanB.name << " copied." << std::endl;
}

HumanB& HumanB::operator=(const HumanB &otherHumanB)
{
    if (this != &otherHumanB)
    {
        this->name = otherHumanB.name;
        this->weapon = otherHumanB.weapon;
    }
    return *this;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack( void )
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " use sharp mind to attack." << std::endl;
}

