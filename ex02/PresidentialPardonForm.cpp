/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:19:45 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/20 12:23:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const obj): AForm()
{
	(*this) = obj;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}







