/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:55 by ywake             #+#    #+#             */
/*   Updated: 2022/02/03 02:31:23 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class HumanB
{
private:
  std::string _name;
  Weapon *_weapon;

public:
  HumanB(std::string name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon &weapon);
};

#endif
