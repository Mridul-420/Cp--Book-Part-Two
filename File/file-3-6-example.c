#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "in.txt";

    fp = fopen(filename, "w");

    fprintf(fp,"ABCDEFGHIJKL\n");
    fprintf(fp,"MNOPQRST\n");
    fprintf(fp,"UVWX\n");
    fprintf(fp,"YZ\n");

    fclose(fp);

    return 0;
}

