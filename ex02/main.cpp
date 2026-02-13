#include <iostream>
#include <string>

int main(void)
{
    std::string var_string = "HI THIS IS BRAIN";
    std::string* stringPTR = &var_string;
    std::string& stringREF = var_string;

    std::cout << "Memory address of the string variable: " << &var_string << std::endl;
    std::cout << "Memory address held by stringPTR:      " << &stringPTR << " information in a variable  " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

    std::cout << "Value of the string variable:  " << var_string << std::endl;
    std::cout << "Value pointed to by stringPTR: " << stringPTR << " and if use this ardess = " << *stringPTR <<std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}
