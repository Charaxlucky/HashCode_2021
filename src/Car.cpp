/*
** EPITECH PROJECT, 2021
** Car
** File description:
** Car
*/

#include "Car.hpp"

Car::Car(std::string line, std::map<std::size_t, Street *> streets)
{
    std::stringstream ss(line);

    ss >> nbStreets;
    for (std::size_t y = 0, x = 0; y < nbStreets; y++) {
        ss >> nameOfTheseStreets[y];
        for (; streets[x]->_name != nameOfTheseStreets[y]; x++);
        path[y] = streets[x];
        x = 0;
    }
}

Car::~Car()
{
}
