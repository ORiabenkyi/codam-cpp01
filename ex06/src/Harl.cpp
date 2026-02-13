#include "../inc/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() 
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() 
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
    typedef void (Harl::*HarlFunction)();
    HarlFunction functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    if (level.empty()) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }

    switch (level[0])
    {
        case 'D':
            (this->*functions[0])();
        case 'I':
            (this->*functions[1])();
        case 'W':
            (this->*functions[2])();
        case 'E':
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    // for (int i = 0; i < HARL_LEVEL; ++i) {
    //     if (levels[i] == level) {
    //         (this->*functions[i])();
    //         return;
    //     }
    // }
    // std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

