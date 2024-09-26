#include <stdio.h>

int main() {
    int x;
    int y;
    int *xp;
    int *yp;

    x = 5;        // x bliver tildelt værdien 5
    xp = &x;      // xp peger nu på adressen af x

    x = 10;       // x opdateres til 10

    y = *xp;      // y får værdien af det xp peger på (som er x), så y = 10

    yp = &y;      // yp peger nu på adressen af y

    *xp = 0;      // Værdien, som xp peger på (dvs. x), bliver sat til 0, så x = 0

    // Print de endelige værdier af x, y, *xp og *yp
    printf("x=%d, y=%d, *xp=%d, *yp=%d\n", x, y, *xp, *yp);

    return 0;
}
