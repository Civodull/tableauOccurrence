#include<stdio.h>
/*
Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension 
maximale: 50 composantes), remplit le tableau par des valeurs entrées au clavier
et affiche le tableau. Effacer ensuite toutes les occurrences de la valeur 0 dans
le tableau T et tasser les éléments restants. Afficher le tableau résultant.
*/

void calculOccurrence(int tableau[], int tailleTab){

int element,indice,indiceJ,indiceK,tri=0,positif=0,posi=0,negatif=0,neg=0;
int TPOS[50],TNEG[50];
 
   // Supprimer les doublons
   for (indice = 0; indice < tailleTab; indice++) {
                  
                  //Elements positifs et negatifs  
                  if (tableau[indice] > 0)
                  {  posi=1;
                     TPOS[positif] = tableau[indice];
                     positif = positif + 1;
                
                  }else if(tableau[indice] < 0)
                  {
                     neg=1;
                     TNEG[negatif] = tableau[indice];
                     negatif = negatif+1;
                  }
      for (indiceJ = indice + 1; indiceJ < tailleTab;) {

         if (tableau[indiceJ] == tableau[indice] && tableau[indice]== 0){
               tri =1;
            for (indiceK = indiceJ; indiceK < tailleTab; indiceK++) {// indiceK = indiceJ
               tableau[indiceK] = tableau[indiceK + 1];
            }
            tailleTab--;
         } else
            indiceJ++;
      }
   }

   if (tri==1)
   {
      printf("\nL'inverse du tableau resultant apres suppression de l'occurrence de 0 : \n");
      for(indice = tailleTab-1; indice >=0; indice--) 
      {
      printf("%d \t", tableau[indice]);
      }
   }else{
    printf("\nAucune occurrence de 0 detectee dans le tableau \n");
    printf("\nL'inverse du tableau resultant sans occurrence est: \n\n");
   for (indice = tailleTab-1; indice >=0; indice--){
     
       printf("%d \t", tableau[indice]);
   }
   }
   //Affichage des tableaux des elements positifs et negatifs 

//Tableau des elements positifs
if (posi ==1 )
{
   printf("\nLe tableau des elements positifs est :  \n");
   for (indice = 0; indice < positif; indice++)
   {
      printf("%d \t",TPOS[indice]);
   }
}else
{
   printf("\nAucun element positif a afficher\n");
}
//Tableau des elements negatifs
if (neg ==1 )
{
   printf("\nLe tableau des elements negatifs est :  \n");
   for (indice = 0; indice < negatif; indice++)
   {
      printf("%d \t",TNEG[indice]);
   }
}else
{
   printf("\nAucun element negatif a afficher\n");
}
/*
printf("\nLes elements du tableau avant permutation\n");
   for (indice = 0; indice < tailleTab; indice++){
      printf("%d \t", tableau[indice]);
   }
*/
}

void afficherTableau(int tableau[], int tailleTab){
    int indice;
   printf("\nLes elements du tableau avant permutation: \n");
   for (indice = 0; indice < tailleTab; indice++){
      printf("%d \t", tableau[indice]);
   }
}

/*
Ranger ensuite les éléments du tableau T dans l'ordre inverse sans 
utiliser de tableau d'aide. Afficher le tableau résultant.

Idée: Echanger les éléments du tableau à l'aide de deux indices qui 
parcourent le tableau en commençant respectivement 
au début et à la fin du tableau et qui se rencontrent en son milieu.
*/

// TROISIEME PARTIE
/* 
Copiez ensuite toutes les composantes strictement positives 
dans un deuxième tableau TPOS et toutes les valeurs strictement 
négatives dans un troisième tableau TNEG. Afficher les tableaux 
TPOS et TNEG.
*/

