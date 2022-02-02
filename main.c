#include <stdio.h>

int farine(int personnum){
    int farine;
    farine = personnum * 125;
    return farine;
}

float lait(int personnum){
    float lait = personnum * 0.25;
    return lait;
}

float oeufs(int personnum){
    float oeufs = personnum * 1.5;
    return oeufs;
}

float sel(int personnum){
    float sel = personnum / 2;
    return sel;
}

float beurre(int personnum) {
    float beurre = personnum / 2;
    return beurre;
}



int main() {
    int personnum;
    printf("---- CHANDELEUR ----\n\n");
    printf("Entrez le nombre de personnes qui mangeront des crepes: ");
    scanf("%d", &personnum);
    printf("\n\nLes ingredients necessaires pour 6 personnes sont: ");
    printf("\nFarine: %d g", farine(personnum));
    printf("\nLait: %f l", lait(personnum));
    printf("\nOeufs: %f", oeufs(personnum));
    printf("\nSel: %f pincees", sel(personnum));
    printf("\nBeurre: %f cuilleres", beurre(personnum));

    return 0;
}
