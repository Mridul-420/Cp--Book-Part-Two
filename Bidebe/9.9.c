#include <stdio.h>

int main()
{
    int n;

    printf("Enter a postive integer (> 0) : ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("one item\n");
            break;
        case 2:
            printf("two item\n");
            break;
        default:
            printf("many items\n");
    }

    return 0;
}
