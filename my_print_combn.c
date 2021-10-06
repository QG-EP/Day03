/*
** EPITECH PROJECT, 2021
** Day03
** File description:
** my_print_combn
*/

int last_nbr(int n)
{
    int x = 9;
    int y = 1;
    int last = 0;

    for (int i = 0; i != n; i++) {
        last += x * y;
        x -= 1;
        y *= 10;
    }
    return (last);
}
    
int cvrt(int n, int nb, int i)
{
    char x;

    if (i != n) {
        x = nb % 10 + '0';
        cvrt(n, nb / 10, i + 1);
        my_putchar(x);
    }
}

static int checking(int n, int nb)
{
    int check = nb % 10;
    int nbr = nb / 10;
    int new_check = nbr % 10;

    for (; n != 1;) {
        if (check > new_check) {
            n -= 1;
            nb = nbr;
            check = nb % 10;
            nbr = nb / 10;
            new_check = nbr % 10;
        }
        else
            return (1);
    }
    return (0);
}


int my_print_combn(int n)
{
    int max = last_nbr(n);
    int nb = 0;

    for (int nb = 0; nb != max + 1; nb ++) {
        if (checking(n, nb) == 0) {
            cvrt(n, nb, 0);
            if (nb == max)
                return (0);
            else {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}