/*
** Hash Code 2021
** IAMAGOD
** File description:
** Main.hpp
*/

#include "File.hpp"
#include "Data.hpp"
#include "Output.hpp"

int main(int ac, char **av)
{
    if (ac == 2) {
        File file;
        Data data(file.open(av[1]));
        Output out;
        out.display(&data);
    }
}