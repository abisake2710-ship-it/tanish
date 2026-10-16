#include <stdio.h>

int main() {
    int a, b, c, car;
    scanf("%d %d %d %d", &a, &b, &c, &car);

    if (a % car == 0)
        printf("Car 1 goes into road A\n");
    else if (b % car == 0)
        printf("Car 1 goes into road B\n");
    else if (c % car == 0)
        printf("Car 1 goes into road C\n");
    else
        printf("No path exists\n");
    return 0;
}
