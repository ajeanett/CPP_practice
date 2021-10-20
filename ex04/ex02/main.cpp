/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:41:57 by ajeanett          #+#    #+#             */
/*   Updated: 2021/04/06 22:26:14 by ajeanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "UltraMarine.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    Squad *vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
       ISpaceMarine* cur = vlc->getUnit(i);
       cur->battleCry();
       cur->rangedAttack();
       cur->meleeAttack();
    }

   //  Squad* crow = new Squad;
   //  ISpaceMarine* nick = new TacticalMarine;
   //  ISpaceMarine* ilnur = new AssaultTerminator;
   //  ISpaceMarine* term = new AssaultTerminator;
   //  ISpaceMarine* sanguinus = new UltraMarine;
   //  ISpaceMarine* aurelius = new UltraMarine;
   //  // crow->push(nick);
   //  // crow->push(ilnur);
   //      std::cout << "crow->getCount 1 " << crow->getCount() << std::endl;
   //      std::cout << "vlc->getCount 1 " << vlc->getCount() << std::endl;
   //  // crow->push(ilnur);
   //  *crow = vlc;
   //  for (int i = 0; i < crow->getCount(); ++i)
   //  {
   //     ISpaceMarine* cur = crow->getUnit(i);
   //     cur->battleCry();
   //     cur->rangedAttack();
   //     cur->meleeAttack();
   //  }
   //  crow->push(nick);
   //  crow->push(ilnur);
   //  crow->push(term);
   //  crow->push(sanguinus);
   //  crow->push(aurelius);
   //  for (int i = 0; i < crow->getCount(); ++i)
   //  {
   //     ISpaceMarine* cur = crow->getUnit(i);
   //     cur->battleCry();
   //     cur->rangedAttack();
   //     cur->meleeAttack();
   //  }
   //  crow->getUnit(0)->battleCry();
    
   //  std::cout << "vlc->getCount " << vlc->getCount() << std::endl;
   //  std::cout << "crow->getCount " << crow->getCount() << std::endl;
   //  delete vlc;
   //  delete crow;
    return 0;
}