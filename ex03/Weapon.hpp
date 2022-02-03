/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:04:58 by ywake             #+#    #+#             */
/*   Updated: 2022/02/03 00:29:00 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
  std::string _type;

public:
  Weapon();
  Weapon(std::string type);
  ~Weapon();
  const std::string &getType(void);
  void setType(std::string newType);
};

#endif
