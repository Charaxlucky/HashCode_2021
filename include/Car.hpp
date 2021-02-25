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

class Car
{
    public:
        Car(std::string line);
        ~Car();

    std::size_t nbStreets;
    std::map<std::size_t, std::string> nameOfTheseStreets;
};