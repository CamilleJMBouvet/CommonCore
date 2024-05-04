/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:12:16 by cbouvet           #+#    #+#             */
/*   Updated: 2024/05/01 14:50:20 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

// -LIBRARIES-
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain	&operator=(Brain const &src);

		std::string	ideas[100];
};

#endif
