//
// Created by User on 06/10/2021.
//

#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H
struct nombreRationnel{
    int numerateur;
    int denominateur;
};
typedef struct nombreRationnel NR;
NR saisie();
void affichage();
NR multiplication();
NR addition();



#endif //TP5_STRUCTURES_H
