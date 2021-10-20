/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:52:27 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 21:55:46 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);



    // ICharacter* hero = new Character("Hero");
    // src->learnMateria(new Fire());
    // tmp = src->createMateria("fire");
    // me->equip(tmp);
    // me->use(2, *hero);
    // me->unequip(2);
    // me->use(2, *hero);
    // me->use(1, *hero);
    // hero->equip(src->createMateria("ice"));
    // hero->use(0, *me);
    
    delete bob;
    delete me;
    delete src;
    // delete hero;
    
    return 0;
}