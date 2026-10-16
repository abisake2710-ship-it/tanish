#include <stdio.h>

int main() {
    int total, x, y;
    scanf("%d %d %d", &total, &x, &y);

    int longBen = total * x / 100;          /* Long Ben's share */
    int rest = total - longBen;
    int blackbeard = rest * y / 100;        /* Blackbeard's share */
    rest -= blackbeard;
    int each = rest / 3;                    /* 3 other pirates; leftovers thrown away */

    printf("%d\n%d\n%d\n", longBen, blackbeard, each);
    return 0;
}
