/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:35:01 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:18:15 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <string>
#include <cstdlib>
#include <cstdio>

Zombie* newZombie( std::string name )
{
  Zombie *heap;
  heap = new (std::nothrow) Zombie(name);
  if (heap == NULL)
  {
    std::perror("error: new");
    std::exit(EXIT_FAILURE);
  }
  return heap;
}
