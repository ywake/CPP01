/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:21:31 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 14:50:01 by ywake            ###   ########.fr       */
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
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void announce(void);
  void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
