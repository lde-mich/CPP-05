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
}

Bureaucrat::~Bureaucrat()
{

}







