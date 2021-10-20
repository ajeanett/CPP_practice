#ifndef MONSTER_HPP
# define MONSTER_HPP

# include "Victim.hpp"

class Monster : public Victim
{

private:
			Monster();

public:
			Monster(const std::string & name);
			~Monster( void );
			Monster(const Monster & src);
			Monster & operator=(Monster const & src);
			virtual void getPolymorphed() const;


};


#endif