
#include "ScavTrap.hpp"

int main(void)
{

    ScavTrap scav("Yoo");
    ScavTrap copy(scav);

    scav.guardGate();

    std::cout << "---------------" << std::endl;
    copy.guardGate();


    return (0);
}