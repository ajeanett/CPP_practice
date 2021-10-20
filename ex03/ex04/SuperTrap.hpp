#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
protected:
    static std::string distractions[FIELDS];
public:
    SuperTrap();
    SuperTrap( const std::string & name);
    SuperTrap( SuperTrap const & src);
    virtual ~SuperTrap(void);
    virtual void pre_print(void);
    // virtual void rangedAttack(std::string const & target);
    // virtual void meleeAttack(std::string const & target);
};

std::ostream & operator<<(std::ostream & o, SuperTrap const & i);

#endif