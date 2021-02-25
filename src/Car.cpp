/*
** EPITECH PROJECT, 2021
** Car
** File description:
** Car
*/

#include "Car.hpp"

Car::Car(std::string line, std::map<std::size_t, Street *> streets, std::size_t w)
{
    std::stringstream ss(line);
    std::string str;

    ss >> nbStreets;
    for (std::size_t y = 0, x = 0; y < nbStreets; y++) {
        ss >> str;
        nameOfTheseStreets[y] = str;
/*        for (; x < w && streets[x]->_name != nameOfTheseStreets[y]; x++);
        path[y] = streets[x];*/
        x = 0;
    }
}

Car::~Car()
{
}
