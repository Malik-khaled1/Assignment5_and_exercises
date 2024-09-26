#include <stdio.h>

int main() {
    int x;
    int y;

    int *xp;
    int *yp;

    x = 5;
    y = x;
    xp = &x;
    yp = &y;

    x = 10;

    printf("x=%d, y=%d, *xp=%d, *yp=%d\n", x, y, *xp, *yp);

    return 0;
}
