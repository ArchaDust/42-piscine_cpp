/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:12:43 by aberneli          #+#    #+#             */
/*   Updated: 2022/04/06 15:26:47 by aberneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::ifstream 	inFile;
	std::ofstream 	outFile;
	std::string		inName;
	std::string		outName;
	std::string		lookFor;
	std::string		replaceStr;
	std::string		chonkyFile;

	size_t			i;
	size_t			foundPos;

	// Args checking
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments, args should be [filename] [oldstr] [newstr]" << std::endl;
		return (1);
	}
	
	// Init and infile checking
	inName = argv[1];
	lookFor = argv[2];
	replaceStr = argv[3];
	outName = inName + ".replace";
	inFile.open(inName);
	if (inFile.fail())
	{
		std::cerr << "Cannot open input file '" << inName << "'." << std::endl;
		return (1);
	}
	
	// Dumping file into memory, makes this whole process easier at the cost of not using input streams
	inFile.seekg(0, std::ios::end);
    chonkyFile.resize(inFile.tellg());
    inFile.seekg(0, std::ios::beg);
    inFile.read(&chonkyFile[0], chonkyFile.size());
	inFile.close();
	
	// opening outfile
	outFile.open(outName, std::fstream::beg | std::fstream::trunc);
	if (outFile.fail())
	{
		std::cerr << "Cannot open ouput file '" << outName << "'." << std::endl;
		return (1);
	}

	// streaming the whole memory chunk into the outfile
	i = 0;
	while ((foundPos = chonkyFile.find(lookFor, i)) != std::string::npos)
	{
		outFile.write(&chonkyFile.c_str()[i], foundPos - i); // write before the replace
		outFile.write(replaceStr.c_str(), replaceStr.size()); // write the replace
		i = foundPos + lookFor.size();
	}
	outFile.write(&chonkyFile.c_str()[i], chonkyFile.size() - i); // write the remaining data

	// cleanup
	outFile.close();
	return (0);
}
