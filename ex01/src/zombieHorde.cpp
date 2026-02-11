#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "Error: number must be greater than 0." << std::endl;
        return nullptr;
    }
    Zombie* horde = new Zombie[N];
    if (!horde)
    {
        std::cout << "Error: memory allocation failed." << std::endl;
        return nullptr;
    }
    for (int i = 0; i < N; i++)
    {
        // horde[i] = Zombie(name + "_" + std::to_string(i));
        horde[i] = Zombie(name);
    }
    return horde;
}