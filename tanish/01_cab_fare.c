#include <stdio.h>
#include <string.h>

int main() {
    int distance;
    char member[10];
    scanf("%d %9s", &distance, member);

    double fare = 100;
    if (distance > 10)
        fare += (distance - 10) * 20;

    if (strcmp(member, "true") == 0 || strcmp(member, "1") == 0)
        fare *= 0.9;

    if (fare == (int)fare)
        printf("Final Fare: Rs.%d\n", (int)fare);
    else
        printf("Final Fare: Rs.%.2f\n", fare);
    return 0;
}
