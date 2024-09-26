#include "circle.h"

// Funktion til at lave 5 cirkler
void five_circles(circle c[])
{
    // c[5]; // Denne linje er ikke nødvendig og kan slettes.

    // En løkke, der kører 5 gange, en gang for hver cirkel
    for (int i = 0; i < 5; i++)
    {
        // Sætter midtpunktet for hver cirkel (x og y)
        c[i].p.x = i; // x-koordinaten for cirklens midtpunkt er lig med cirklens nummer (0 til 4)
        c[i].p.y = i; // y-koordinaten for cirklens midtpunkt er også lig med cirklens nummer (0 til 4)

        // Sætter radius for hver cirkel
        c[i].r = i; // Radiusen for hver cirkel er også lig med cirklens nummer
    }
}

// Funktion, der tjekker, om en cirkel er gyldig
bool circle_is_valid(const circle *c)
{
    // Tjekker om radius er negativ
    if ((*c).r < 0)
    {
        return false; // Hvis radius er mindre end 0, er cirklen ikke gyldig
    }
    else
    {
        return true; // Hvis radius er 0 eller større, er cirklen gyldig
    }
}
    
// Funktion til at flytte (oversætte) en cirkel
void translate(circle *c, const point *p)
{
    // Løkke, der kører 5 gange, en gang for hver cirkel
    for (int i = 0; i < 5; i++) {
        // Flyt (oversæt) cirklens x-koordinat med værdien fra punkt p
        c[i].p.x += (*p).x;

        // Flyt (oversæt) cirklens y-koordinat med værdien fra punkt p
        c[i].p.y += (*p).y;
    }
}
