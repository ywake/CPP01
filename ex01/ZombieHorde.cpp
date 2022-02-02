/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:02:26 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:00:28 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

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
    horde[i].setName(name + std::to_string(i));
  }

  return horde;
}
