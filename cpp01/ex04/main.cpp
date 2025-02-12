/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana < ngastana@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:56:06 by ngastana          #+#    #+#             */
/*   Updated: 2025/02/12 12:44:55 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace_word (std::string line, char *s1, char *s2)
{
	size_t index = 0;
	std::string newline;
	size_t pos = 0;

	pos = line.find(s1, pos);
	std::cout << line << std::endl;
	std::cout << "-------" << std::endl;
	while (pos != std::string::npos)
	{
		std::cout << "INDEX:" << index << std::endl;
		std::cout << "POS:" << pos << std::endl;
		newline += line.substr(index, (pos - index));
		std::cout << newline << std::endl;
		newline += s2;
		std::cout << newline << std::endl;
		index = pos + std::strlen(s1);
		pos = line.find(s1, index);
	}
	newline += line.substr(index);
	std::cout << newline << std::endl;
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
		outarchive << line << std::endl;
	}
	archive.close();
	outarchive.close();
	std::cout << "Archivo creado y palabra o frase remplazada :P" << std::endl;
	return ;
}

int main (int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "Meteme " << std::endl;
	else
		set_is_for_losers(argv[1], argv[2], argv[3]);
	return (1);
}