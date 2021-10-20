#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define NUM_OF_FIELDS 7

class FragTrap : public ClapTrap
{
private:
    
protected:
    static std::string funny_attacks[NUM_OF_FIELDS];

public:
    FragTrap( void );
    FragTrap( const std::string & name);
    FragTrap( FragTrap const & src);
    virtual ~FragTrap(void);
    void vaulthunter_dot_exe(std::string const & target);
    virtual void pre_print(void);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif