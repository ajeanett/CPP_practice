#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class       	Enemy {
private:
	std::string	_type;
	int			_hp;
public:
	Enemy( void );
	virtual ~Enemy( void );
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &src);
	Enemy	&operator=(const Enemy &src);
	const std::string	getType() const;
	int					getHP() const;
	virtual void		takeDamage(int);
};

#endif