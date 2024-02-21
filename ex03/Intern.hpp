/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:59:03 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 11:08:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class Intern
{
	public:
		AForm *makeForm(std::string nameForm, std::string target);

		Intern &operator=(Intern const &obj);

		Intern(Intern const &obj);
		Intern();
		~Intern();

};



