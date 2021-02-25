/*
** Hash Code 2021
** IAMAGOD
** File description:
** Street.hpp
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <map>
#include <algorithm>

class Street
{
    public:
        Street(std::string line);
        ~Street();

// Intersections at start and at the end
    std::size_t b;
    std::size_t e;

    std::string _name;

    std::size_t timeToTravel;
};