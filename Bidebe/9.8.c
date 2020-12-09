#include <stdio.h>

enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main()
{
    enum DAY today;

    today = FRIDAY;

    switch (today){
        case SUNDAY:
            printf("Today is SUNDAY. it is a work day\n");
            break;
        case MONDAY:
            printf("Today is MONDAY. it is a work day\n");
            break;
        case TUESDAY:
            printf("Today is TUESDAY. it is a work day\n");
            break;
        case WEDNESDAY:
            printf("Today is WEDNESDAY. it is a work day\n");
            break;
        case THURSDAY:
            printf("Today is THURSDAY. it is a work day\n");
            break;
        case FRIDAY:
            printf("Today is FRIDAY. it is a holi-day\n");
            break;
        case SATURDAY:
            printf("Today is SATURDAY. it is a work day\n");
            break;
    }

    return 0;
}
