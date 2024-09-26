

int increment(int *p){ // Funktionene deklareres med en pointer som parameter

return *p = *p + 1; // Værdien på adressen som p peger på øges med 1 (v = v + 1)

}


int main() {

int v = 5; // integer variabel v initialiseres til 5 (v = 5)

increment(&v); // Adressen til v sendes ind i funktionen

printf("v incrementeret med 1, v = %d", v); // v udskrives efter incrementering

}



