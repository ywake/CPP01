/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:02:26 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:32:12 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdio>

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
  Zombie *horde;

  if (N < 0)
    return NULL;
  horde = new (std::nothrow) Zombie[N];
  if (horde == NULL) {
    std::perror("error: new");
    std::exit(EXIT_FAILURE);
  }

  for (int i = 0; i < N; i++) {
    std::stringstream ss;
    std::string arg;

    ss << name << i;
    ss >> arg;
    horde[i].setName(arg);
  }

  return horde;
}
