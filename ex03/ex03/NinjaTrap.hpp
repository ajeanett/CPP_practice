#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
protected:
    static std::string distractions[FIELDS];
public:
    NinjaTrap( void );
    NinjaTrap( const std::string & name);
    NinjaTrap( NinjaTrap const & src);
    virtual ~NinjaTrap(void);
    virtual void pre_print(void);
    void ninjaShoebox(ClapTrap &target);
    void ninjaShoebox(FragTrap &target);
    void ninjaShoebox(ScavTrap &target);
    void ninjaShoebox(NinjaTrap &target);
};

std::ostream & operator<<(std::ostream & o, NinjaTrap const & i);

#endif