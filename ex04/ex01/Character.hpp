#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class				Character {
private:
	std::string		_name;
	int				_ap;
	AWeapon			*_wp;
public:
	Character( void );
    ~Character( void );
	Character(std::string const &name);
    Character(const Character &src);
	Character   &operator=(const Character &src);
	void			recoverAP();
	void			equip(AWeapon*);
	void			attack(Enemy*);
	std::string	const	getName() const;
	AWeapon				*getWeapon() const;
	int					getAP() const;
};

std::ostream	&operator<<(std::ostream &, const Character &);

#endif