/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:33:53 by ywake             #+#    #+#             */
/*   Updated: 2022/02/04 13:06:46 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>


class Karen
{
private:
  void debug( void );
  void info( void );
  void warning( void );
  void error( void );

public:
  Karen();
  ~Karen();
  void complain( std::string level );
};

#endif
