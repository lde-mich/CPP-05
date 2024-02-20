/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:43:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/19 12:32:54 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		std::string name;
		bool firmed;
		int gradeSign;
		int gradeExec;

	public:
		std::string const &getName() const;
		int const &getGradeSign() const;
		int const &getGradeExec() const;
		bool const &getFirmed() const;

		Form &operator=(Form const &form);

		virtual void beSigned(Bureaucrat const &bureaucrat) = 0;
		
		AForm(Form const &form);
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm();
		virtual ~AForm();

		//Exception

		class GradeTooHighException : public std::exception
		{
			public:
				std::string const printError() const throw ()
				{
					return ("Error High Bureaucrate grade");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				std::string const printError() const throw()
				{
					return ("Error Low Bureaucrate grade");
				}
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);







