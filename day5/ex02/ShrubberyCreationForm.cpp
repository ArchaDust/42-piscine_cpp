/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:19:51 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/21 17:04:18 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string g_trees[] = 
{
"               ,@@@@@@@,",
"       ,,,.   ,@@@@@@/@@,  .oo8888o.",
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o",
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'",
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'",
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'",
"   `&%\\ ` /%&'    |.|        \\ '|8'",
"       |o|        | |         | |",
"       |.|        | |         | |",
"     \\/ ._\\//_/__/  ,\\__//__\\/.  \\_//__/_"
};

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137, "Default")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137, target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm&)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
	return (*this);
}

void	ShrubberyCreationForm::executeInternal(void) const
{
	std::string		filename = getTarget() + "_shrubbery";
	std::ofstream	out(filename);

	if (out.fail())
	{
		std::cerr << "Filed to access " << filename << std::endl;
		return ;
	}
	for (int i = 0; i < 10; i++)
	{
		out << g_trees[i] << std::endl;
	}
	out.close();
}