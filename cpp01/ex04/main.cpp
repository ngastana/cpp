/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:56:06 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/18 18:18:56 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace_word (std::string line, char *s1, char *s2)
{
	size_t index = 0;
	std::string newline;
	size_t pos = 0;

	pos = line.find(s1, pos);
	while (pos != std::string::npos)
	{
		newline += line.substr(index, (pos - index));
		newline += s2;
		index = pos + std::strlen(s1);
		pos = line.find(s1, index);
	}
	newline += line.substr(index);
	return (newline);
}

void set_is_for_losers (char *filename, char *s1, char *s2)
{
	std::ifstream archive(filename); //abre el archivo modo lectura, si el archivo no abre archivo sera falso
	if (!archive)
	{
		std::cerr << "No se pudo abrir el archivo." << std::endl;
		return ;
	}
	std::string line;
	std::ofstream outarchive("outarchivo.txt");
	if (!outarchive) 
	{
		std::cerr << "No se pudo abrir el segundo archivo." << std::endl;
		return ;
	}
	while (std::getline(archive, line))
	{
		line = replace_word(line, s1, s2);
	}
	archive.close();
	outarchive.close();
	std::cout << std::endl;
	std::cout << "File created (outarchivo.txt) and word or phrase replaced." << std::endl;
	std::cout << std::endl;
	return ;
}

int main (int argc, char *argv[])
{
	if (argc != 4)
                return (std::cerr << "This program needs 3 arguments:\n1st: \
                Existing input file with read permission\n2nd: \
                Ocurrence to be replaced\n3rd: \
                Ocurrence with which to replace" << std::endl, 1);

	else
		set_is_for_losers(argv[1], argv[2], argv[3]);
	return (1);
}