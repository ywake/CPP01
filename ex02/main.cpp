/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:37:20 by ywake             #+#    #+#             */
/*   Updated: 2022/02/02 15:52:52 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout
    << "Address" << std::endl
    << "str: " << &str << std::endl
    << "stringPTR: " << stringPTR << std::endl
    << "stringREF: " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout
    << "Content" << std::endl
    << "str: " << str << std::endl
    << "stringPTR: " << *stringPTR << std::endl
    << "stringREF: " << stringREF << std::endl;
}
