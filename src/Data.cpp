/*
** Hash Code 2021
** IAMAGOD
** File description:
** Data.cpp
*/

#include "Data.hpp"

Data::Data(std::map<std::size_t, std::string> file)
{
    std::stringstream ss;
    std::size_t w = 1;

    ss.str(file[0]);
    ss >> d;
    ss >> i;
    ss >> s;
    ss >> v;
    ss >> f;

    for (std::size_t q = 0; q < s; q++, w++) {
        streets[q] = new Street(file[w]);
    }
    for (std::size_t q = 0; q < v; q++, w++) {
        cars[q] = new Car(file[w], streets, s);
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

void Data::manageThem(void)
{
/*    for (std::size_t y = 0; y < v; y++) {
        cars[y];
    }*/
}