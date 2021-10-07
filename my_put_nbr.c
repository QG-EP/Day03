/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_put_nbr
*/

int my_put_nbr(int nbr)
{
    int x;

    if (nbr < 0) {
        nbr = -nbr;
        my_putchar('-');
    }
    if (nbr > 9)
        my_put_nbr(nbr / 10);
    x = nbr % 10 + 48;
    my_putchar(x);
    return (0);
}