#include <stdio.h>

int main()
{
    int x, n, m;

    while(1){
        printf("PLease Enter Your Number (0 to exit): ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        printf("How many bits you want to shift right? ");
        scanf("%d", &x);

        m = n >> x;
        printf("RESULT is %d\n\n",m);
    }
    return 0;
}

