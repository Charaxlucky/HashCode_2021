/*
** EPITECH PROJECT, 2021
** Intersection
** File description:
** Hash Code
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <map>
#include <algorithm>

class Intersection {
    public:
        Intersection();
        ~Intersection();

    std::size_t incomingStreets;
    std::map<std::string, std::size_t> allStreetsInfos;
};
