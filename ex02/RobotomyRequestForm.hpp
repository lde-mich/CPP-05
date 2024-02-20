/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:00:08 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/20 12:05:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm: public AForm
{
	private:
		std::string target;

	public:
		std::string const &getTarget() const;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		RobotomyRequestForm();
		~RobotomyRequestForm();

};
