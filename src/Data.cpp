/*
** Hash Code 2021
** IAMAGOD
** File description:
** Data.cpp
*/

#include "Data.hpp"

Data::Data(std::map<std::size_t, std::string> file)
{
    std::stringstream ss(file[0]);
    std::size_t w = 1;

    ss >> d;
    ss >> i;
    ss >> s;
    ss >> v;
    ss >> f;

    for (std::size_t q = 0; q < s; q++, w++) {
        Street stre(file[w]);
        streets[q] = &stre;
    }
    for (std::size_t q = 0; q < v; q++, w++) {
        Car carr(file[w]);
        cars[q] = &carr;
    }
}

void Data::display(void)
{
    std::cout << d << ' ' << i << ' ' << s << ' ' << v << ' ' << f << std::endl;
    for (auto it = streets.cbegin(); it != streets.cend(); ++it) {
        std::cout << it->second->b << " " << it->second->e << " " << it->second->_name << " " << it->second->timeToTravel << std::endl;
    }
    for (auto it = cars.cbegin(); it != cars.cend(); ++it) {
        std::cout << it->second->nbStreets;
        for (std::size_t y = 0; y < it->second->nbStreets; y++)
            std::cout << " " << it->second->nameOfTheseStreets[y];
        std::cout << std::endl;
    }
}