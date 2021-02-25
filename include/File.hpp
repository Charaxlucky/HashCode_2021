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
        std::map<int, std::string> open(std::string fileName);
};