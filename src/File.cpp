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
    std::ifstream file(fileName);
    std::map<std::size_t, std::string> tab;

    if (!file)
        std::cerr << "Error: " << fileName << ": No such file or directory" << std::endl;
    for (std::size_t i = 0; !file.eof(); i++) {
        std::getline(file, tab[i]);
        if (tab[i].length() == 0)
            break;
    }
    file.close();
    return (tab);
}