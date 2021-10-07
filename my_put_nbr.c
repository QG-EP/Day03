/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_put_nbr
*/

void my_putchar(char c);

void calc(int nbr)
{
    if (nbr >= 10)
        calc(nbr / 10);
    if (nbr > 0)
        my_putchar((nbr % 10) + 48);
}

void my_put_nbr(int nbr)
{
    if (nbr == 0) {
        my_putchar('0');
        return;
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    calc(nbr);
}