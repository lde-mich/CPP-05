/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:49:01 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/16 15:01:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form()
{

}

Form::Form(std::string name, int gradeSign, int gradeExec)
{
	this->name = name;
	this->gradeSign = gradeSign;
	this->gradeExec = gradeExec;

	if (this->gradeSign < 1 || this->gradeExec < 1)
		Form::GradeTooLowException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		Form::GradeTooHighException();
}

Form::Form(Form const &form)
{
	(*this) = form;
}


Form::~Form()
{

}



std::string const &Form::getName() const
{
	return (this->name);
}

int const &Form::getGradeSign() const
{
	return (this->gradeSign);
}

int const &Form::getGradeExec() const
{
	return (this->gradeExec);
}

bool const &Form::getFirmed() const
{
	return (this->firmed);
}










