
#ifndef HARL_HPP
#define HARL_HPP
#include <string>  
#include <iostream>

#define HARL_LEVEL 4

class Harl {
public:
    Harl();
    ~Harl();
    
    void complain(std::string level);
    
    
private:
    // Harl();
    // ~Harl();
    void debug();
    void info();
    void warning();
    void error();

};

#endif