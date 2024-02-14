/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:16 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/14 11:35:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	(*this) = bureaucrat;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;

	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}



std::string const &Bureaucrat::getName() const
{
	return (this->name);
}

int const &Bureaucrat::getGrade() const
{
	return (this->grade);
}


void Bureaucrat::increment()
{
}

void Bureaucrat::decrement()
{
}


Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	this->name = bureaucrat.name;
	this->grade = bureaucrat.grade;

	return (*this);
}













