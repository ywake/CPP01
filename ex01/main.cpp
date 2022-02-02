/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:35:54 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:22:19 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
  int count;
  Zombie *horde;

  count = 10;
  if (argc != 1) {
    std::stringstream(argv[1]) >> count;
    if (count < 0)
      count = 10;
  }

  horde = zombieHorde(count, "z-");

  for (int i = 0; i < count; i++) {
    horde[i].announce();
  }
  delete [] horde;
}
