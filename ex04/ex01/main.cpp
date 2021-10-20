/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:50:48 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 22:21:14 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "LightSaber.hpp"
#include "Minigun.hpp"
#include "Zombie.hpp"
#include "PhilippKirkorov.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    // AWeapon* lightsaber = new LightSaber();
    // AWeapon* minigun = new Minigun();
    // Enemy* Kirkorov = new PhilippKirkorov();
    // Enemy* zomb = new Zombie();
    // Enemy* mut = new SuperMutant();
    // me->equip(lightsaber);
    // std::cout << *me;
    // me->recoverAP();
    // std::cout << *me;
    // me->recoverAP();
    // std::cout << *me;
    // me->recoverAP();
    // std::cout << *me;
    // me->attack(Kirkorov);
    // std::cout << *me;
    // me->attack(Kirkorov);
    // std::cout << *me;
    // me->equip(minigun);
    // me->attack(zomb);
    // std::cout << *me;
    // me->attack(zomb);
    // std::cout << *me;
    // me->attack(mut);
    // std::cout << *me;

    // delete me;
    // delete lightsaber;
    // delete minigun;
    // delete pf;
    // delete pr;
    // delete mut;

    return 0; 
}