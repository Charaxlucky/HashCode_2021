/*
** EPITECH PROJECT, 2021
** Car
** File description:
** Car
*/

#include "Car.hpp"

Car::Car(std::string line)
{
    std::stringstream ss(line);

    ss >> nbStreets;
    for (std::size_t y = 0; y < nbStreets; y++)
        ss >> nameOfTheseStreets[y];
}

Car::~Car()
{
}
