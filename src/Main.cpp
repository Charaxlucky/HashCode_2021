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
    if (ac < 1) {
        File file;
        Data data(file.open(av[1]));
        data.display();
    }
}