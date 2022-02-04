/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:33:40 by ywake             #+#    #+#             */
/*   Updated: 2022/02/04 17:15:08 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>

Karen::Karen() { }

Karen::~Karen() { }

void Karen::debug( void )
{
  std::cout
  << "[ DEBUG ]" << std::endl
  << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
  << std::endl;
}

void Karen::info( void )
{
  std::cout
  << "[ INFO ]" << std::endl
  << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
  << std::endl;
}

void Karen::warning( void )
{
  std::cout
  << "[ WARNING ]" << std::endl
  << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
  << std::endl;
}

void Karen::error( void )
{
  std::cout
  << "[ ERROR ]" << std::endl
  << "This is unacceptable, I want to speak to the manager now."
  << std::endl;
}

void Karen::complain( std::string level )
{
  std::string names[] = {
    "DEBUG", "INFO", "WARNING", "ERROR"
  };
  void (Karen::*funcs[])(void) = {
    &Karen::debug, &Karen::info, &Karen::warning, &Karen::error
  };

  for (size_t i = 0; i < 4; i++) {
    if (level == names[i]) {
      (this->*funcs[i])();
      break ;
    }
  }
}
