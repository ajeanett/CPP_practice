#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{

private:
			Peon();

public:
			Peon(const std::string & name);
			~Peon( void );
			Peon(const Peon & src);
			Peon & operator=(Peon const & src);
			virtual void getPolymorphed() const;


};


#endif