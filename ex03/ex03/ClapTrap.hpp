#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

// # define FIELDS 6
# define BOLD "\033[1m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define BLUE "\033[1;36m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;96m"
# define BLUE2 "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define END "\033[0m"

class ClapTrap
{
protected:
    int _hp;
    int _maxhp;
    int _enp;
    int _maxenp;
    int _level;
    std::string _name;
    int _melee_dam;
    int _ranged_dam;
    int _armor;

public:
    ClapTrap( void );
    ClapTrap( const std::string & name);
    ClapTrap( ClapTrap const & src);
    virtual ~ClapTrap(void);
    std::string get_name(void) const;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void print_parameters(void);
    ClapTrap &operator=(ClapTrap const & rhs);
    virtual void pre_print(void);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);

#endif