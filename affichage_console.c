#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "affichage_console.c"
#define LARGEUR 45
#define HAUTEUR 25


void afficherCadre() {
    gotoxy(0,0);
    text_color(LIGHTGRAY);
    for (int y = 0; y <= HAUTEUR+1; y++) {
        for (int x = 0; x <= LARGEUR+1; x++) {
            if (y == 0 || y == HAUTEUR+1) printf("#");
            else if (x == 0 || x == LARGEUR+1) printf("#");
            else printf(" ");
        }
        printf("\n");
    }
}
