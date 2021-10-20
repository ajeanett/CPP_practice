#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define FIELDS 6

class ScavTrap : public ClapTrap
{
private:
    virtual void pre_print(void);
protected:
    static std::string funny_quests[FIELDS];
public:
    ScavTrap( void );
    ScavTrap( const std::string & name);
    ScavTrap( ScavTrap const & src);
    virtual ~ScavTrap(void);
    void challengeNewcomer(std::string const & target);
    
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);

#endif