#include <stdio.h>

int main(void) {
    int x;   // Deklarerer en int variabel x
    int y;   // Deklarerer en int variabel y

    int *p1; // Deklarerer en pointer p1, som kan pege på en int
    int *p2; // Deklarerer en pointer p2, som kan pege på en int

    x = 5;   // Tildeler værdien 5 til x
    y = 10;  // Tildeler værdien 10 til y

    p1 = &x; // p1 får adressen til x, så p1 peger nu på x
    p2 = p1; // p2 får samme adresse som p1, så p2 peger også på x

    *p2 = y; // Dereferencer p2 (som peger på x) og tildeler værdien af y (10) til x
    p1 = &x; // p1 peger igen på adressen til x (ingen ændring her, da p1 allerede pegede på x)

    // Udskriver værdierne af x, y, *p1 og *p2
    // x = 10 (ændret af *p2 = y)
    // y = 10 (uændret)
    // *p1 = 10 (p1 peger på x, som nu er 10)
    // *p2 = 10 (p2 peger også på x, som nu er 10)
    printf("x=%d, y=%d, *p1=%d, *p2=%d\n", x, y, *p1, *p2);

    return 0;
}
