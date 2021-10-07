/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        if (nb == 214783648) {
            nb = nb - 1;
        }
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else
        my_putchar(nb + '0');
    return (0);
}