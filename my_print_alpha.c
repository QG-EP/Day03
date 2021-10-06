/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_print_alpha
*/

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

void my_putchar(char c);

int my_print_alpha(void)
{
    for (int x = 97; x <= 122; x++)
        my_putchar(x);
    return (0);
}