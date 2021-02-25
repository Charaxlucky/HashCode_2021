/*
** Hash Code 2021
** IAMAGOD
** File description:
** File.hpp
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <map>
#include <algorithm>

class File
{
    public:
        File();
        ~File();
        std::map<std::size_t, std::string> open(std::string fileName);
};