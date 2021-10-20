#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class           MateriaSource : public IMateriaSource {
private:
    AMateria    *_inventory[4];
public:
    MateriaSource();
    MateriaSource   &operator=(const MateriaSource &);
    MateriaSource(const MateriaSource &);
    virtual ~MateriaSource();
    virtual void		learnMateria(AMateria *);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif