#include <stdio.h>

int main()
{
    char small_letter, captial_letter;

    printf("Please Enter a Small letter : ");

    small_letter = getchar();
    captial_letter = small_letter - 32;

    printf("The Capital letter is : %c\n", captal_letter);
    return 0;
}
