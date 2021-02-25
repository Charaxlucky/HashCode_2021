/*
** EPITECH PROJECT, 2021
** Street
** File description:
** Street
*/

#include "Street.hpp"

Street::Street(std::string line)
{
    std::stringstream ss(line);

    ss >> b;
    ss >> e;
    ss >> _name;
    ss >> timeToTravel;
}

Street::~Street()
{
}
