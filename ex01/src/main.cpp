#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    Zombie dog("Dog");
    {
        Zombie bird("Bird");
    }
    Zombie cat("Cat");

    // Zombie* horde = zombieHorde((int)500000000000, "Zombie");
    // Zombie* horde = zombieHorde(1783793664, "Zombie");
    Zombie* horde = zombieHorde(MAX_ZOMBIES, "Zombie");
    if (horde)
    {
        for (int i = 0; i < MAX_ZOMBIES; i++)
            {
                std::cout << "Zombie " << i + 1 << "(" <<  &horde[i] << ")"<< ": ";
                horde[i].announce();
            }
    
        delete[] horde;
    }
    return 0;
}
