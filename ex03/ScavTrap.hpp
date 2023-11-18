

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();
        
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& assign);

    
    void    attack(const std::string& target);
    void    guardGate(void);
};

#endif