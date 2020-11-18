#include<stdio.h>
/*
Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension 
maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier
et affiche le tableau. Effacer ensuite toutes les occurrences de la valeur 0 dans
le tableau T et tasser les éléments restants. Afficher le tableau résultant.
*/

void calculOccurrence(int tableau[], int tailleTab){

int element,indice,indiceJ,indiceK;
 
   // Supprimer les doublons
   for (indice = 0; indice < tailleTab; indice++) {

      for (indiceJ = indice + 1; indiceJ < tailleTab;) {

         if (tableau[indiceJ] == tableau[indice] && tableau[indice]== 0) {

            for (indiceK = indiceJ; indiceK < tailleTab; indiceK++) {// indiceK = indiceJ
               tableau[indiceK] = tableau[indiceK + 1];
            }
            tailleTab--;
         } else
            indiceJ++;
      }
   }
   for (indice = 0; indice < tailleTab; indice++) {
      printf("%d \t", tableau[indice]);
   }
}

void afficherTableau(int tableau[], int tailleTab){
    int indice;
   for (indice = 0; indice < tailleTab; indice++) {
      printf("%d \t", tableau[indice]);
   }
}