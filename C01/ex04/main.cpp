/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <iortega-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:11:11 by iortega-          #+#    #+#             */
/*   Updated: 2023/11/26 12:13:45 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string outname;

	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "Error: empty string" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if(!infile.is_open())
	{
		std::cout << "Error opening infile: "<< argv[1] << std::endl;
		return (1);
	}
	outname = argv[1] + std::string(".replace");
	outfile.open(outname.c_str());
	if(!outfile.is_open())
	{
		std::cout << "Error opening outfile: "<< outname << std::endl;
		return (1);
	}
	std::string line;
	size_t pos;
	while (std::getline(infile, line))
	{
		if (infile.eof())
			break;
		pos = 0;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			std::string before = line.substr(0, pos);
			std::string after = line.substr(pos + std::string(argv[2]).length());
			line = before + std::string(argv[3]) + after;
			pos += std::string(argv[3]).length();
    	}
		outfile << line << '\n';
	}
	pos = 0;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			std::string before = line.substr(0, pos);
			std::string after = line.substr(pos + std::string(argv[2]).length());
			line = before + std::string(argv[3]) + after;
			pos += std::string(argv[3]).length();
    	}
		outfile << line;
	infile.close();
	outfile.close();
	return (0);
}