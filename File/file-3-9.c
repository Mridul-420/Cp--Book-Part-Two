#include <stdio.h>

int main()
{
    int return_value;
    char *filename = "image2.jpg";

    return_value = remove(filename);

    if(return_value != 0){
        perror("File Remove Falied");
        return 1;
    }

    printf("%s removed successfully\n", filename);

    //now try to remove again;
    return_value = remove(filename);

    if(return_value != 0){
        perror("File Remove Falied");
        return 1;
    }

    printf("%s removed successfully\n", filename);

    return 0;
}
