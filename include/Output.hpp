/*
** EPITECH PROJECT, 2021
** HashCode
** File description:
** Output
*/

#pragma once

#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <map>
#include <algorithm>
#include "Intersection.hpp"
#include "Data.hpp"

class Output {

    public:
        Output();
        ~Output();

        void display(Data *);
    std::size_t nbInter;
    std::map<std::size_t, Intersection *> inters;
};
