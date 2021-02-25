/*
** Hash Code 2021
** IAMAGOD
** File description:
** Main.hpp
*/

#include "File.hpp"
#include "Data.hpp"

int main(int ac, char **av)
{
    File file;
    Data data(file.open(av[1]));

    data.display();
}