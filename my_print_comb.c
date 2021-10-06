/*
** EPITECH PROJECT, 2021
** Day3
** File description:
** my_print_comb
*/

void my_putchar(char c);

int core(int a, int b)
{
    for (int c = '2'; c <= '9'; c++) {
        if (a < b && b < c) {
            my_putchar(a);
            my_putchar(b);
            my_putchar(c);
            if (a == '7' && b == '8' && c == '9') {
                return (0);
            } else {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    return (0);
}

int my_print_comb(void)
{
    for (int a = '0'; a <= '7'; a++) {
        for (int b = '1'; b <= '8'; b++) {
            core (a, b);
        }
    }
    return (0);
}