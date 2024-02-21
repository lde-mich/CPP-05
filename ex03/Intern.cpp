/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:00:32 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 12:10:40 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{

}

Intern::Intern(Intern const &obj)
{
	(*this) = obj;
}

Intern::~Intern()
{

}



Intern &Intern::operator=(Intern const &obj)
{
	return (*this);
}



AForm *Intern::makeForm(std::string nameForm, std::string target)
{
	AForm *tmp = NULL;

	if (nameForm != "Robotomy request" && nameForm != "Shrubbery creation" && nameForm != "Presidential pardon")
	{
		std::cout << "Error creation form" << std::endl; 
		return (tmp);
	}

	switch (nameForm[0])
	{
		case 'R':
			tmp = new RobotomyRequestForm();
			std::cout << "Intern creates" << tmp.getName() << std::endl;
			return (tmp);
		case 'S':
			tmp = new ShrubberyCreationForm();
			std::cout << "Intern creates" << tmp.getName() << std::endl;
			return (tmp);
		case 'P':
			tmp = new PresidentialPardonForm();
			std::cout << "Intern creates" << tmp.getName() << std::endl;
			return (tmp);
	}
}







