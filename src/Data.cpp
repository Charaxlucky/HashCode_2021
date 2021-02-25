/*
** Hash Code 2021
** IAMAGOD
** File description:
** Data.cpp
*/

#include "Data.hpp"

Data::Data(std::map<int, std::string> file)
{
    std::stringstream ss(file[0]);
    std::size_t w = 1;

    ss >> d;
    ss >> i;
    ss >> s;
    ss >> v;
    ss >> f;

    for (int q = 0; q < s; q++, w++) {
        Street stre(file[w]);
        streets[q] = &stre;
    }
    for (int q = 0; q < v; q++, w++) {
        Car carr(file[w]);
        cars[q] = &carr;
    }
}