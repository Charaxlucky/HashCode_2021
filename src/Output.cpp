/*
** EPITECH PROJECT, 2021
** Output
** File description:
** Output
*/

#include "Output.hpp"

Output::Output()
{
}

Output::~Output()
{
}

void Output::display(Data *data)
{
    std::size_t w = 0, q = 0;
    std::cout << data->i << std::endl;
    for (std::size_t u = 0; u < data->i; u++) {
        std::cout << u << std::endl;
        for (w = 0, q = 0; w < data->s; w++)
            q += data->streets[w]->e == u ? 1 : 0;
        std::cout << q << std::endl;
        for (w = 0; w < data->s; w++)
            std::cout << data->streets[w]->_name << " 1" << std::endl;
    }
}