

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
:  ClapTrap(name), ScavTrap(name) ,FragTrap(name), name(name)
{
	this->ClapTrap::name = name + "_clap_name";
	this->hitPoint =100 ;
	this->energyPoint = 50;
	this->attackDamage = 30;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
:  ClapTrap(copy), ScavTrap(copy) ,FragTrap(copy), name(copy.name)
{
	std::cout << "[DiamondTrap] Copy constructor" << std::endl;

	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->attackDamage = copy.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& assign)
{
	std::cout << "[DiamondTrap] Assignement operator" << std::endl;
	this->ClapTrap::name = assign.ClapTrap::name;
	this->name = assign.name;
	this->hitPoint = assign.hitPoint;
	this->energyPoint = assign.energyPoint;
	this->attackDamage = assign.attackDamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << "Attack from DiamondTrap " <<  name << std::endl; 
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{

	std::cout << "I am " << this->name << std::endl;
	std::cout << "Hit point " << hitPoint << std::endl;
    std::cout << "Energy Point " << energyPoint << std::endl;
    std::cout << "attack Damage " << attackDamage << std::endl;
}

