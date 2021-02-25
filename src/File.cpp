/*
** Hash Code 2021
** IAMAGOD
** File description:
** File.cpp
*/

#include "File.hpp"

File::File()
{
}

File::~File()
{
}

std::map<std::size_t, std::string> File::open(std::string fileName)
{
    std::ifstream file;
    std::map<std::size_t, std::string> tab;

    file.open(fileName);
    if (!file)
        std::cerr << "Error: " << fileName << ": No such file or directory" << std::endl;
    else
        std::cout << file.rdbuf();
    for (std::size_t i = 0; ; i++)
        if (!std::getline(std::cin, tab[i]))
            break;
    file.close();
    return (tab);
}