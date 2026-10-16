#include <stdio.h>

int main() {
    int answered, remaining, submitted;
    scanf("%d %d %d", &answered, &remaining, &submitted);

    if (answered >= 1 && remaining > 0 && submitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");
    return 0;
}
