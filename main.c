#include <stdio.h>

int main(void) {
    int sec;

    printf("input the second: ");
    scanf("%i", &sec);

    printf("The time is %i:%i\n", sec/60, sec%60);

    return 0;
}
