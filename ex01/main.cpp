/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:35:54 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:08:38 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
  int count;
  Zombie *horde;

  count = 10;
  if (argc != 1) {
    count = std::atoi(argv[1]);
    if (count < 0)
      count = 10;
  }

  horde = zombieHorde(count, "z-");

  for (int i = 0; i < count; i++) {
    horde[i].announce();
  }
  delete [] horde;
}
