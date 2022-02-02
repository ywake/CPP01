/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:00:34 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 13:43:49 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void heapTest(std::string name)
{
  Zombie *zombie;

  zombie = newZombie(name);
  zombie->announce();
  delete zombie;
}

int main(int argc, char *argv[])
{

  for (int i = 1; i < argc; i++)
  {
    if (i % 2)
      heapTest(std::string(argv[i]));
    else
      randomChump(std::string(argv[i]));
  }
}
