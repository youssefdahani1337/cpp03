
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamon("Diamondo");

    diamon.whoAmI();

    std::cout << "---------------------" << std::endl;
    DiamondTrap d2(diamon);

    diamon.whoAmI();

    d2.attack("Nta");

    DiamondTrap d3 ("walo");
    d3 = d2;
    return (0);
}