/*
Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension 
maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier
et affiche le tableau. Effacer ensuite toutes les occurrences de la valeur 0 dans
le tableau T et tasser les éléments restants. Afficher le tableau résultant.
*/

#include<stdio.h>
#include "tableau.h"
 int main() {

int tailleTableau, tableauM[50],element, indice, vrai,compteur=0;
char c;
do
{

printf("Entrer la taille du tableau > 1 et <= 50\n");
if(scanf("%d",&tailleTableau) == 1 || (c=getchar() != '\n' && c!=EOF)){ //Changer par while
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
    printf("Tableau Saisi est : \n");
    afficherTableau(tableauM, tailleTableau);
    printf("Tableau trier : \n");
    calculOccurrence(tableauM, tailleTableau);
    }

}
else
{
  printf("Verifiez que le nombre est un entier et qu'il est compris entre 2 et 50 \n");
}

} while (tailleTableau < 2 || tailleTableau>50);

return 0;
}