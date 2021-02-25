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
#include <algorithm>

class Car
{
    public:
        Car(std::string line);
        ~Car();

    std::size_t nbStreets;
    std::map<int, std::string> nameOfTheseStreets;
};