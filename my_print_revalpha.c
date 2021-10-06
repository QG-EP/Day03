/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_print_revalpha
*/

void my_putchar (char c);

int my_print_alpha (void)
{
    for (int x = 122; x >= 97; x--)
        my_putchar(x);
    return (0);
}