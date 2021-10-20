#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	int i = 0;
    while (i < 4)
    {
        _inventory[i] = 0;
        i++;
    }
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src)
	{
		int i = 0;
		while (i < 4)
		{
			if (_inventory[i])
				_inventory[i] = 0;
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			i++;
		}
	}
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &src) 
{
    *this = src;
}

MateriaSource::~MateriaSource() 
{
	int i = 0;
    while (i < 4)
    {
        if (this->_inventory[i])
        {
            delete _inventory[i];
            _inventory[i] = 0;
        }
        i++;
    }
}

void		MateriaSource::learnMateria(AMateria *m) 
{
    if (!m)
		return ;
	int i = 0;
    while (i < 4)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            break;
        }
        i++;
    }
}

AMateria	*MateriaSource::createMateria(std::string const &type) 
{
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] && this->_inventory[i]->getMatType() == type)
			return (this->_inventory[i]->clone());
		i++;
	}
	return (0);
}