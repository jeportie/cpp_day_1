/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:36:34 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/07 20:00:27 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string& content, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;

    pos = content.find(s1, pos);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
        pos = content.find(s1, pos);
    }
}

int main(int argc, char* argv[])
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
    filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream inputFile(filename);
	if (!inputFile)
	{
		std::cerr << "Error: could not open file " << filename << std::endl;
		return (1);
	}
    return 0;
}

    /*std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());*/
    /*inputFile.close();*/
    /**/
    /*replaceString(content, s1, s2);*/
    /**/
    /*std::ofstream outputFile(filename + ".replace");*/
    /*if (!outputFile) {*/
    /*    std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;*/
    /*    return 1;*/
    /*}*/
    /**/
    /*outputFile << content;*/
    /*outputFile.close();*/
