/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:16:49 by ywake             #+#    #+#             */
/*   Updated: 2022/02/04 13:20:31 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char const *argv[])
{
  Karen karen;

  for (int i = 1; i < argc; i++) {
    karen.complain(std::string(argv[i]));
  }
}
