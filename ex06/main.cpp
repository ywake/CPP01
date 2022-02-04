/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:38:39 by ywake             #+#    #+#             */
/*   Updated: 2022/02/04 17:06:09 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Karen.hpp"

int main(int argc, char const *argv[])
{
  if (argc != 2)
    return (1);

  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  size_t index;
  for (index = 0; index < 4; index++) {
    if (argv[1] == levels[index])
      break ;
  }

  Karen karen;

  switch (index)
  {
  case 0:
    karen.complain("DEBUG");
    std::cout << std::endl;
  case 1:
    karen.complain("INFO");
    std::cout << std::endl;
  case 2:
    karen.complain("WARNING");
    std::cout << std::endl;
  case 3:
    karen.complain("ERROR");
    break;
  default:
    std::cout
      << "[ Probably complaining about insignificant problems ]"
      << std::endl;
    break;
  }

}

