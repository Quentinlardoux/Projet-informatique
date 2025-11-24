#include <stdio.h>

int menu() {
    int choix;
    printf("\n1. Jouer");
    printf("\n2. Regles du jeu");
    printf("\n3. Quitter\n");
    scanf("%d",&choix);
    return choix;
}
void ChoixMenu() {
    do {
        switch (choix) {
    case 1:
        Jeu();
        break;
    case 2:
        Regles();
        break;
    case 3:
        printf("Au revoir\n"); }
        break;
    }
    while (choix!=0);
}


