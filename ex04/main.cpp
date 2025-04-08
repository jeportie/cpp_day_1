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
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iterator>
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

void safeIfs(std::ifstream& inputFile, const std::string& filename)
{
    /* Open <filename> in read mode */
    inputFile.open(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

void safeOfs(std::ofstream& outputFile, const std::string& filename)
{
    /* Open or create <filename>.replace in write mode */
    outputFile.open((filename + ".replace").c_str());
    if (!outputFile)
    {
        std::cerr << "Error: could not create output file" << filename << ".replace" << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

std::string cpFile(std::ifstream& inputFile)
{
    /* Copy inputFile to a buffer -> conent */
    std::string content(
        (std::istreambuf_iterator<char>(inputFile)),  // Set the start <char> of the file.
        std::istreambuf_iterator<char>());            // Set the end <char> of the file.
	return (content);
}

int main(int argc, char* argv[])
{
    std::ifstream inputFile;
    std::ofstream outputFile;

    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }

	std::string filename = argv[1];
	std::string s1       = argv[2];
	std::string s2       = argv[3];

    safeIfs(inputFile, filename);
	std::string content = cpFile(inputFile);
    inputFile.close();
    replaceString(content, s1, s2);
    safeOfs(outputFile, filename);
    outputFile << content;
    outputFile.close();
    return 0;
}
