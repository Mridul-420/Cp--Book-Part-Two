#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n & 1){
        printf("%d is odd number.", n);
    }
    else{
        printf("%d is even number.", n);
    }
    return 0;
}
