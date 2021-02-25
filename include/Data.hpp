/*
** Hash Code 2021
** IAMAGOD
** File description:
** Data.hpp
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <map>
#include <algorithm>
#include "Street.hpp"
#include "Car.hpp"

class Data
{
    public:
        Data(std::map<int, std::string>);
        ~Data();

// Variables
    std::size_t d;
    std::size_t i;
    std::size_t s;
    std::size_t v;
    std::size_t f;

// All streets
    std::map<int, Street *> streets;

// All cars
    std::map<int, Car *> cars;
};