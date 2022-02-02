#include <stdio.h>

int ingredients(int personnum) {
    int farine, sel, beurre;
    farine = personnum * 125;
    float lait = personnum * 0.25;
    float oeufs = personnum * 1.5;
}



int main() {
    int personnum;
    printf("---- CHANDELEUR ----\n\n");
    printf("Entrez le nombre de personnes qui mangeront des crepes: ");
    scanf("%d", &personnum);
    printf("\n\nLes ingredients necessaires pour 6 personnes sont: ");

    return 0;
}
