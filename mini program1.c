#include <stdio.h>
#include <stdlib.h>


int main (){


/*projet de mohammed araou */
/* les codes sont "25" et "245"*/

    struct moh {
   char nom[50];
    char prenom[50];
    int co;
    char date[50];
    float p;


};
struct moh client1 = {"araou","mohammed",245,"20.01.2040",12000.00};
struct mohh {
    char nom2[50];
    char prenom2[50];
    int co2;
    char date2[50];
    float p2;
};
struct mohh client2 = {"super","mario",245,"28.12.2020",20000.00

};


     int o;
     int nn;
     int dd;
     int co;
     int n;
     printf("pour rechercher click -1-\n");
     printf("pour inscrir click -2- \n");

     printf("Choisissez un numéro: ");
     scanf ("%d",&n);
     if (n==1){
         printf("entrez votre code :");
          scanf("%d",&co);
          if(co==245){
              printf("\n**********************************\n");
              printf(" votre nom  : %s \n",client1.nom);
              printf(" votre prenom : %s \n",client1.prenom);
              printf("  la date : %s \n",client1.date);
              printf(" montant payé: %.2f DA \n",client1.p);}
          else { if(co==25){
                 printf("\n**********************************\n");

              printf("votre nom :%s \n",client2.nom2);
              printf("votre prenom :%s \n",client2.prenom2);
              printf("votre code :%d \n",client2.co2);
              printf("la date :%s \n",client2.date2);
              printf("montant payé : %f",client2.p2);
          }else {
              printf("votre code est incorrect");
          }


          }





    }else{
        char wo[50];
        char uw[50];

     printf("entez votre nom :");
     scanf("%s",&wo);
     printf("entrez votre prenom :");
     scanf("%s",&uw);
     printf("\n**********************************\n");
          printf("votrez votre nom : %s \n",&wo);
          printf("votrez votre prenom :%s ",&uw);



    }
    printf ("\nmerci pour votre temps");






return 0;
}
