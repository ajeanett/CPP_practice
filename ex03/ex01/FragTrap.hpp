#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

# define NUM_OF_FIELDS 7
# define BOLD "\033[1m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define BLUE "\033[1;36m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;96m"
# define BLUE2 "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define END "\033[0m"

class FragTrap
{
private:
    int _hp;
    int _maxhp;
    int _enp;
    int _maxenp;
    int _level;
    std::string _name;
    int _melee_dam;
    int _ranged_dam;
    int _armor;

protected:
    static std::string funny_attacks[NUM_OF_FIELDS];

public:
    FragTrap( void );
    FragTrap( const std::string & name);
    FragTrap( FragTrap const & src);
    ~FragTrap(void);
    std::string get_name(void) const;
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
    void pre_print(void);
    void print_parameters(void);
    FragTrap &operator=(FragTrap const & rhs);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif