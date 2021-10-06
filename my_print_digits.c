/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_print_digits
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (int x = '0'; x <= '9' ; x++)
        my_putchar(x);
    return (0);
}