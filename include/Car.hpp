/*
** Hash Code 2021
** IAMAGOD
** File description:
** Car.hpp
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <map>
#include <sstream>
#include <algorithm>
#include "Street.hpp"

class Car
{
    public:
        Car(std::string line, std::map<std::size_t, Street *>);
        ~Car();

    std::size_t nbStreets;
    std::map<std::size_t, std::string> nameOfTheseStreets;
    std::map<std::size_t, Street *> path;
};