//
// Created by User on 06/10/2021.
//

#include "structures.h"
#include "stdio.h"
NR saisie(){
    NR monNR;
    printf("Saisissez votre dénominateur puis votre numérateur.\n");
    scanf("%d %d", &monNR.denominateur , &monNR.numerateur);
    return monNR;
}
void affichage(NR monNR){
    printf("numerateur : %d  denominateur : %d.\n", monNR.numerateur, monNR.denominateur);
}
NR multiplication(NR monNR1, NR monNR2){
    NR nouveauRationnel;
    nouveauRationnel.numerateur=monNR1.numerateur*monNR2.numerateur;
    nouveauRationnel.denominateur=monNR1.denominateur*monNR2.denominateur;
    return nouveauRationnel;
}
NR addition(NR monNR1, NR monNR2){
    NR nouveauRationnel;
    nouveauRationnel.numerateur=(monNR1.numerateur*monNR2.denominateur)+(monNR1.denominateur*monNR2.numerateur);
    nouveauRationnel.denominateur=monNR1.denominateur*monNR2.denominateur;
    return nouveauRationnel;
}
