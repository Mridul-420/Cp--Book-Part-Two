#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int i, n;

    printf("Please Enter The Number of Students : ");
    scanf("%d", &n);

    //now allocate memory
    marks = (int *)malloc(sizeof(int) * n);

    printf("Enter The Marks for each student: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);
    }
        printf("Now here you can see the values : \n");

        //now print the marks array

        for(i = 0; i < n; i++){
            printf("%d\n", marks[i]);
        }
        return 0;
}
