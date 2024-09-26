#pragma once // Sørger for, at denne fil kun inkluderes én gang

#include <stdbool.h> // Inkluderer boolske typer (true/false)

typedef struct point {
  int x; // Dette er x-koordinaten for et punkt
  int y; // Dette er y-koordinaten for et punkt
} point; // Vi kalder denne type for 'point'

typedef struct
{
    int r; // Dette er radiusen af cirklen
    point p; // Dette er midtpunktet for cirklen, som er et punkt med x- og y-koordinater
} circle; // Vi kalder denne type for 'circle'

