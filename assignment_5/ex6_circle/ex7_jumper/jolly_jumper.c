#pragma once
#include <stdbool.h>

// Denne funktion tjekker, om en sekvens af tal er en "Jolly Jumper".
// En "Jolly Jumper" er en sekvens, hvor forskellene mellem hvert tal og det næste
// er alle unikke og ligger mellem 1 og (størrelsen på sekvensen - 1).

bool is_jolly_jumper(const int seq[], int size)
{
    // Hvis sekvensens størrelse er 0 eller mindre, kan vi ikke lave noget, så vi returnerer "falsk".
    if (size <= 0)
    {
        return false;
    }
    // Hvis sekvensen kun har ét tal, er det automatisk en "Jolly Jumper", så vi returnerer "sand".
    else if (size == 1)
    {
        return true;
    }
    
    // Her laver vi en liste af sand/falsk værdier, som holder styr på, hvilke forskelle vi allerede har fundet.
    // Der er "size-1" forskelle, fordi vi sammenligner hvert tal med det næste.
    bool diffs_found[size-1];
    int diff; // Dette vil holde forskellen mellem to tal i sekvensen.

    // Vi starter med at sætte alle værdier i diffs_found til "falsk", fordi vi endnu ikke har fundet nogen forskelle.
    for (int i = 0; i < size - 1; i++)
    {
        diffs_found[i] = false;
    }

    // Nu går vi gennem hvert tal i sekvensen (undtagen det sidste) for at finde forskellene.
    for (int i = 0; i < size - 1; i++)
    {
        // Vi finder forskellen mellem tal nummer i og det næste tal i sekvensen.
        // Vi bruger en ternary operator (en kort måde at skrive en hvis/så-betingelse) for at sikre, at vi altid får en positiv forskel.
        diff = (seq[i] > seq[i+1]) ? seq[i] - seq[i+1] : seq[i+1] - seq[i];

        // Hvis forskellen er 0, eller den er for stor (større eller lig med sekvensens størrelse),
        // eller hvis vi allerede har fundet den forskel før, så returnerer vi "falsk", fordi sekvensen ikke er en "Jolly Jumper".
        if (diff == 0 || diff >= size || diffs_found[diff-1] == true)
        {
            return false;
        }
        
        // Hvis forskellen er gyldig og ikke set før, markerer vi den som fundet.
        diffs_found[diff-1] = true;
    }

    // Hvis vi har gennemgået hele sekvensen uden problemer, så er sekvensen en "Jolly Jumper", og vi returnerer "sand".
    return true;
}



int main() {
  // Define sequences
  int input[10] = {4, 2, 7, 6, 4, 3, 1, 0, 11, 8}, input_n = 10;
  int input2[4] = {1, 4, 2, 3}, input2_n = 4;
  // Check and print for input
  printf("%d\n", input_n);
  for (int i=0; i < input_n; i++) {
    printf("%d ", input[i]);
  }
  printf("\n");
  if (isJolly(input, input_n) == true) {
    printf("Jolly\n\n");
  } else {
    printf("Not Jolly\n\n");
  }
  // Check and print for input2
  printf("%d\n", input2_n);
  for (int i=0; i < input2_n; i++) {
    printf("%d ", input2[i]);
  }
  printf("\n");
  if (isJolly(input2, input2_n) == true) {
    printf("Jolly\n\n");
  } else {
    printf("Not Jolly\n\n");
  }

  return 0;
}







