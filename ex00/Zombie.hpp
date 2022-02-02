/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:31 by ywake             #+#    #+#             */
/*   Updated: 2022/02/01 11:04:46 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
  std::string _name;

public:
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
