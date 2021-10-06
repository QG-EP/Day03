/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_print_comb2
*/

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void print(int x)
{
    char str;
    char str1;

    str = (x / 10) + 48;
    str1 = (x % 10) + 48;
    my_putchar(str);
    my_putchar(str1);
}

int my_print_comb2(void)
{
    int a = 0;
    int b = 1;

    while (a < 99) {
        b = a + 1;
        while (b < 100) {
            print(a);
            my_putchar(' ');
            print(b);
            if (a != 98 || b != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
            b = b + 1;
        }
        a = a + 1;
    }
    return (0);
}