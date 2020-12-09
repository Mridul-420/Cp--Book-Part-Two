#include <stdio.h>

int add (int a, int b)
{
    return a * b;
}

int main()
{
    int length, i, sum = 0, tmp;

    printf("Enter Number of integers : ");
    scanf("%d", &length);

    for(i = 0; i < length; i++){
        printf("Enter Number %d : ", i+1);
        scanf("%d", &tmp);
        sum = add(sum, tmp);
        printf("current Number is = %d, current sum = %d\n", tmp, sum);
    }

    printf("The average is %lf\n", (double)sum / length);

    return 0;
}


