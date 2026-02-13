
#include "../inc/HumanA.hpp"

HumanA::HumanA() : name("Code less"), weapon(nullptr)
{
    std::cout << "Human A " << name << " created." << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name)
{
    this->weapon = &weapon;
    std::cout << "HumanA " << name << " created." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Human A " << name << " destroyed." << std::endl;
}

HumanA::HumanA(const HumanA &otherHumanA)
{
    *this = otherHumanA;
    std::cout << "HumanA " << otherHumanA.name << " copied." << std::endl;
}

HumanA& HumanA::operator=(const HumanA &otherHumanA)
{
    if (this != &otherHumanA)
    {
        this->name = otherHumanA.name;
        this->weapon = otherHumanA.weapon;
    }
    return *this;
}

void HumanA::attack( void )
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack." << std::endl;
}
