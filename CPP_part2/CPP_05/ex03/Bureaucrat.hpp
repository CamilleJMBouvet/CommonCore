/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:01:34 by cbouvet           #+#    #+#             */
/*   Updated: 2024/11/10 23:07:31 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// -LIBRARIES-
# include <iostream>
# include "Form.hpp"

// -MACROS-
# define GREY		"\001\033[1;37m\002"
# define BLUE		"\001\033[1;38;2;147;222;255m\002"
# define RED		"\001\033[1;31m\002"
# define R			"\001\033[1;00m\002"

// -CLASS-
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &src);

		std::string	getName()const;
		int			getGrade()const;

		void		increment();
		void		decrement();

		bool		signForm(Form &form);
		bool		executeForm(Form const &form);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what()const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what()const throw();
		};

	private:
		const std::string _name;
		int _grade;

		Bureaucrat();
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &instance);

#endif
