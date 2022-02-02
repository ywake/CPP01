/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:22 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 14:50:34 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name() { }

Zombie::Zombie(std::string name) : _name(name) { }

Zombie::~Zombie()
{
  std::cout << _name << " destructor" << std::endl;
}

void Zombie::announce(void)
{
  std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
  _name = name;
}
