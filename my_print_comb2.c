/*
** EPITECH PROJECT, 2021
** Day03
** File description:
** my_print_comb2
*/

int print(int x)
{
    char str;
    char str1;

    str = (x / 10) + 48;
    str1 = (x % 10) + 48;
    my_putchar(str);
    my_putchar(str1);
    return (0);
}

int my_print_comb2(void)
{
    int b = 1;

    for (int a = 0; a < 99; a++) {
        b = a + 1;
        for (; b < 100; b++) {
            print(a);
            my_putchar(' ');
            print(b);
            if (a != 98 || b != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}