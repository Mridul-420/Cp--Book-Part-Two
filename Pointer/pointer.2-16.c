#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("Address of c : %c\n", c);
    printf("Address of c : %c\n", *p);
    printf("Address of c : %c\n", **q);

    return 0;
}


