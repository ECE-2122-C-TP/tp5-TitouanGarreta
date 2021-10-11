//
// Created by User on 06/10/2021.
//

#include "tableaux.h"
#include "stdio.h"
#include "structures.h"

void exercice1(){
    NR monNR1=saisie();
    affichage(monNR1);
    NR monNR2=saisie();
    affichage(monNR2);
    NR resultAdd;
    NR resultMult;
    resultMult=multiplication(monNR1,monNR2);
    resultAdd=addition(monNR1,monNR2);
    affichage(resultAdd);
    affichage(resultMult);
}
/*
 * IN= les différents numérateur et dénominateur de chaque nombres rationnels
 * OUT= le numérateur et le dénominateur du nombre rationnel issue de l'addition puis de la multiplication
 */
void exercice2(){
    int tableauExo2[100];
    int i=0;
    int N=0;
    int entierASaisir=0;
    int entierLePlusGrand=0;
    printf("Combien d'entier voulez-vous saisir ?\n");
    scanf("%d",&N);
    while(N>100){
        printf("Erreur : Combien d'entier voulez-vous saisir ?\n");
        scanf("%d",&N);
    }
    printf("Saisir le premier entier.\n");
    scanf("%d",&entierASaisir);
    tableauExo2[0]=entierASaisir;
    entierLePlusGrand=entierASaisir;
    for(i=1;i<N;i++){
        printf("Saisir votre entier.\n");
        scanf("%d",&entierASaisir);
        tableauExo2[i]=entierASaisir;
        if(entierASaisir>entierLePlusGrand){
            entierLePlusGrand=entierASaisir;
        }
    }
    printf("L'entier le plus grand est %d.\n",entierLePlusGrand);
}
/*
 * IN=le nombre d'entier à saisir
 * INOUT= les valeurs du tableaux
 * OUT= l'entier le plus grand
 */

void exercice3() {
    int tableauExo3[3][4] = {{0}};
    int tableauCopie[12] = {{0}};
    int valeursTableauExo3 = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Saisissez la valeur a inserer.\n");
            scanf("%d", &valeursTableauExo3);
            tableauExo3[i][j] = valeursTableauExo3;
            tableauCopie[k] = valeursTableauExo3;
            k = k + 1;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", tableauExo3[i][j]);
        }
        printf("\n");
    }
    printf("///////////////\n");
    for (k = 0; k < 12; k++) {
        printf("%d\t", tableauCopie[k]);
    }
}