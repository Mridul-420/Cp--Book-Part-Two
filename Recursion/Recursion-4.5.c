#include <stdio.h>

void recurse()
{
    char *s = "Hurry, I am leaing recursion!";
    printf("%s\n", s);
    recurse();
}
int main()
{
    recurse();
    return 0;
}
