/*
Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension 
maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier
et affiche le tableau. Effacer ensuite toutes les occurrences de la valeur 0 dans
le tableau T et tasser les éléments restants. Afficher le tableau résultant.
*/

#include<stdio.h>
#include "tableau.h"
#include<ctype.h>

 int main() {

int tailleTableau, tableauM[50],element, indice, vrai,compteur=0;
char c;


printf("Entrer la taille du tableau > 1 et <= 50\n");
do
{
if((scanf("%d",&tailleTableau) == 1 || (c=getchar() != '\n' && c!=EOF)) && (tailleTableau  >1 && tailleTableau  <= 50)){ //Changer par while
    for (indice = 0; indice < tailleTableau; indice++)
    {
       do 
        {
            printf("Entrer l'element %d \n",indice);
            if(vrai=scanf("%d", &element) == 1){ 
            tableauM[indice] = element;
            compteur++;
            }
        }while (vrai != 1 && (c=getchar() != '\n' && c!=EOF));
    }
    //printf("compteur %d\n",compteur);
    if (compteur >0 && compteur == tailleTableau)
    {

    afficherTableau(tableauM, tailleTableau);
    calculOccurrence(tableauM, tailleTableau);
    }
}else if(tailleTableau <2 || tailleTableau >50)
{
    printf("\nLa taille du tableau doit etre comprise entre 2 et 50 \n");
    printf("\nAucun autre type ne sera accepter a part les nombres entiers\n");
    printf("\nVeuillez saisir une taille valide !!! \n");

}
} while (tailleTableau < 2 || tailleTableau > 50);

return 0;
}