//Bibliotheque principale
#include <stdio.h> /*Inclure la bibliothèque STanDard Input Output
                     permet d'utiliser, entre autre, printf et scanf*/
#include <windows.h> /*j'invoque cette header pour utiliser l'un de ces fonctionnalites 
pour changer  la couleur de l'interface graphique en gris*/
#include<math.h> //j'invoque cette header pour utiliser pour utiliser abs et fabs et sqrt
int main()
{
    int cst,a,rep,reponse,b,prod,i,x,c;  //declaration des entiers
    const int PI=3.14; //declaration de la constante PI
    float p,A,D,X,X1,X2,absolue,moy,rad,f,l,h,L,r,B,H,PHT,PTTC,HT,TVA; //declaration des reels
    int QTCOM;//declaration d'un entiers
    float PU,PAP,TOT,REM,PORT;//declaration des reels
    int s=0,cpt=0,choix,nbr;//declaration des entiers
    float note;//declaration des reels
    char choix1,Sprog;//declaration des caracteres
	 system("\t\t\t\t\t\t\tcolor 70\t\t\t\t\t\t\t");//pour changer  la couleur de l'interface graphique 
	//Ce design a été pris sur le site https://patorjk.com/
printf("\t\t¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦       ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦    ¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦  ¦¦\n");
printf("\t\t¦¦   ¦¦ ¦¦   ¦¦ ¦¦    ¦¦      ¦¦ ¦¦         ¦¦        ¦¦      ¦¦      ¦¦¦¦  ¦¦¦¦ ¦¦      ¦¦         ¦¦    ¦¦   ¦¦ ¦¦      ¦¦¦\n ");
printf("\t\t¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦      ¦¦ ¦¦¦¦¦      ¦¦        ¦¦¦¦¦¦¦ ¦¦¦¦¦   ¦¦ ¦¦¦¦ ¦¦ ¦¦¦¦¦   ¦¦¦¦¦¦¦    ¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦    ¦¦\n");
printf("\t\t¦¦      ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦         ¦¦             ¦¦ ¦¦      ¦¦  ¦¦  ¦¦ ¦¦           ¦¦    ¦¦    ¦¦   ¦¦ ¦¦       ¦¦\n");
printf("\t\t¦¦      ¦¦   ¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦  ¦¦¦¦¦¦¦    ¦¦        ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦      ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦    ¦¦    ¦¦   ¦¦ ¦¦¦¦¦¦¦  ¦¦\n");
printf("\n");
printf("\n");
printf("\n");
printf("\t\t\t\t¦¦¦¦¦¦  ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦¦      ¦¦¦    ¦¦¦       ¦¦¦¦¦¦  ¦¦  ¦¦¦¦¦  ¦¦      ¦¦       ¦¦¦¦¦¦  \n");
printf("\t\t\t\t¦¦   ¦¦ ¦¦   ¦¦ ¦¦    ¦¦ ¦¦      ¦¦   ¦¦¦¦  ¦¦¦¦       ¦¦   ¦¦ ¦¦ ¦¦   ¦¦ ¦¦      ¦¦      ¦¦    ¦¦ \n");
printf("\t\t\t\t¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦        ¦¦ ¦¦¦¦ ¦¦       ¦¦   ¦¦ ¦¦ ¦¦¦¦¦¦¦ ¦¦      ¦¦      ¦¦    ¦¦ \n");
printf("\t\t\t\t¦¦      ¦¦   ¦¦ ¦¦    ¦¦ ¦¦      ¦¦   ¦¦  ¦¦  ¦¦ ¦¦    ¦¦   ¦¦ ¦¦ ¦¦   ¦¦ ¦¦      ¦¦      ¦¦    ¦¦ \n");
printf("\t\t\t\t¦¦      ¦¦   ¦¦  ¦¦¦¦¦¦  ¦¦           ¦¦      ¦¦ ¦¦    ¦¦¦¦¦¦  ¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦  ¦¦¦¦¦¦  \n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
system("PAUSE");
system("cls");
                    printf("\t\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                                                °°°°°°°\n");
					printf("\t\t\t\t\t\t\t°°°°°°°                PROJET PERSONNEL                °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                    ________                    °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                                                °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                       DE                       °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                    ________                    °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                                                °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                MOUHAMEDOUNE FALL               °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                    ________                    °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                                                °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°             BIENVENUE DANS LE PROJET           °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°                                                °°°°°°°\n");
                    printf("\t\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
                    system("PAUSE"); //mettre le programme en suspension jusqu'a ce que l'utilisateur tape sur une touche
    do{
	system("cls");  //clear          
           char cha[200][200]={"\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n",
                              "\t\t\t\t\t\t°°°°°°°°°°     CHOISISSEZ UN EXERCICE A EXECUTER     °°°°°°°°°°°\n",
                              "\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n",
                              "\n\t\t\t\t\t\t°              1.     Exercice 10 du TD1                       °\n",
                              "\n\t\t\t\t\t\t°              2.     Exercice 12 du TD1                       °\n",
                              "\n\t\t\t\t\t\t°              3.     Exercice 13 du TD1                       °\n", 
                              "\n\t\t\t\t\t\t°              4.     Exercice 14 du TD1                       °\n", 
                              "\n\t\t\t\t\t\t°              5.     Exercice 15 du TD1                       °\n", 
                              "\n\t\t\t\t\t\t°              6.     Exercice 16 du TD1                       °\n", 
                              "\n\t\t\t\t\t\t°              7.     Exercice 2 Valeur Absolue du TD2         °\n", 
                              "\n\t\t\t\t\t\t°              8.     Exercice 3 Test Divisibilite du TD2      °\n", 
                              "\n\t\t\t\t\t\t°              9.     Exercice 4 Plusieurs Conditions du TD2   °\n", 
                              "\n\t\t\t\t\t\t°              10.    Exercice 5 Equations du TD2              °\n", 
                              "\n\t\t\t\t\t\t°              11.    Exercice 6 du TD2                        °\n", 
                              "\n\t\t\t\t\t\t°              12.    Exercice 7 du TD2                        °\n",  
                              "\n\t\t\t\t\t\t°              13.    Exercice 8 du TD2                        °\n",
                              "\n\t\t\t\t\t\t°              14.    Exercice 9 du TD2                        °\n",
                              "\n\t\t\t\t\t\t°              15.    Exercice 10(PGDC) du TD2                 °\n",
                              "\n\t\t\t\t\t\t°              16.    Exercice 11 du TD2                       °\n",
                              "\n\t\t\t\t\t\t°              17.    Exercice 12 du TD2                       °\n",
                              "\n\t\t\t\t\t\t°                                                              °\n",
                              "\n\t\t\t\t\t\t°              18.    Quitter                                  °\n",
							  "\n\t\t\t\t\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n",};
        int j=0;
		for(i=0;i<24;i++)
		{
			for(j=0; j<strlen(cha[i]); j++)
            {
       	        printf("%c",cha[i][j]);
            	if(cha[j][j]==' ')
           	    continue;
           	    Sleep(1);
			}
		}
       printf("\nentrer votre choix:");
       scanf("%d",&choix);
    switch(choix) //suivant choix faire
    {   
        case 1: //cas 1 ou on traite l'exercice 10 du TD1
            do{
			system("cls");//clear
            
printf("\n       ########################################################\n");
printf("\n     ##   a------CALCULE LE PERIMETRE ET L'AIRE D'UN TRIANGLE  ##\n");
printf("\n    ###                                                        ### \n ");
printf("\n   ####   b------CALCULE LA CARRE D'UN NOMBRE                  ####\n");
printf("\n  #####                                                        #####\n");
printf("\n   ####   c------CALCULE LA SOMME DES CARRES DES DEUX NOMBRES  ####\n");
printf("\n    ###                                                        ###\n");
printf("\n     ##   d------CALCULE ET AFFICHE LA MOYENNE DE DEUX NOMBRES ##\n");
printf("\n       ########################################################\n");
            printf("\nentrer votre choix:");
            scanf("%s",&Sprog);
            switch(Sprog) //suivant Sprog faire
            {
            	int s;
            	float moy;
                 case'a': //cas de la question 1 de l'exo 10
                 system("cls");//clear
				 printf("entrer la longueur:\n");
                 scanf("%f",&l);
                 printf("entrer la largeur");
                 scanf("%f",&L);
                 p=(l+L)*2;//Calcule du perimetre d'un rectangle
                 A=l*L;//Calcule de l'aire d'un rectangle
                 printf("le perimetre est %f\n",p);//
                 printf("l'aire est %f\n",A);
                 break;//Fin de l'exo 1-a
                 
                 case'b'://cas de la question 2 de l'exo 10
                 system("cls");
                 printf("entrer un nombre:\n");
                 scanf("%d",&a);
                 printf("le carre de %d donne %d",a,a*a);
                 break;//Fin de l'exo 1-b
                 
                 case'c'://cas de la question 3 de l'exo 10
                 system("cls");
                 printf("entrer un nombre:\n");
                 scanf("%d",&a);
                 printf("entrer un nombre:\n");
                 scanf("%d",&b);
                 printf("le somme des carre de ces deux nombres donnent %d",(a*a)+(b*b));
                 break;//Fin de l'exo 1-c
                 
                 case'd'://cas de la question 4 de l'exo 10
                 system("cls");
                 printf("entrer un nombre:\n");
                 scanf("%d",&a);
                 printf("entrer un nombre:\n");
                 scanf("%d",&b);
                 s=a+b;
                 moy=s/2;
                 printf("la moyenne de ses deux nombres donnent %f",moy);
                 break;//Fin de l'exercice 1-d
        }
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;//Fin de l'exercice 1
   
        case 2: //cas 2 ou on traite l'exercice 12 du TD1
            do{
			system("cls");//clear
            
            //le but de cet exercice est de faire une permutation de deux nombres;
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###     EXERCICE 12:PERMUTATION DE DEUX NOMBRES           ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            printf("\n");
			system("PAUSE");
            system("cls");
            printf("entrer a:\n");
            scanf("%d",&a);
            printf("entrer b:\n");
            scanf("%d",&b);
            printf("\navant permutation :a=%d b=%d",a,b);//Avant permutation
            cst=a;
            a=b;
            b=cst;
            printf("\napres permutation :a=%d et b=%d",a,b);//Apres permutation
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;//Fin de l'exercice 2
        
        case 3://cas 3 ou on traite l'exercice 13 du TD1
        do{
		    system("cls");//Clear
            
            //le but de cet exercice est de faire une permutation de trois nombres
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###    EXERCICE 13:PERMUTATION DE TROIS NOMBRES           ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer un nombre:\n");
            scanf("%d",&a);
            printf("entrer un nombre:\n");
            scanf("%d",&b);
            printf("entrer un nombre:\n");
            scanf("%d",&c);
            printf("\navant permutation :a=%d b=%d c=%d",a,b,c);//Avant permutation
            cst=a;
            a=b;
            b=c;
            c=cst;
            printf("\napres permutation :a=%d b=%d c=%d",a,b,c);//Apres permutation
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;//Fin de l'exercice 3
        
        case 4://cas 4 ou on traite l'exercice 14 du TD1
            
			do{
			system("cls");//clear 
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###   EXERCICE 14:CALCULE DU NOMBRE DE RADIATEUR          ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer la longueur:\n");
            scanf("%f",&l);
            printf("entrer la largeur:\n");
            scanf("%f",&L);
            printf("entrer l'hauteur:\n");
            scanf("%f",&h); 
            rad=(l*L*h)/8;
            printf("le nombre de radiateur est %f",rad);//Nombre de radiateur
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
		break;//Fin de l'exercice 4
        
        case 5: //cas 5 ou on traite l'exercice 15 du TD1
        do{  
			system("cls");//clear
            
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###    EXERCICE 15:CALCULE DU PRIX TOUT TAXE COMPRISE     ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            system("PAUSE");
            system("cls");
            printf("\nentrer le nombre de produit:\n");
            scanf("%d",&nbr);
            printf("\nentrer le prix unitaire d'un produit:\n");
            scanf("%f",&HT);
            printf("\nentrer le taux de TVA en %:\n");
            scanf("%d",&TVA);
            PHT=HT*nbr;
            printf("\nle prix de tous les produits est:%f",PHT);
            PTTC=PHT+(PHT*(TVA/100));
            printf("le prix tout taxe comprise est %f",PTTC);//Prix tout taxe comprise
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
		break;//Fin de l'exercice 5
        
        case 6: //cas 6 ou on traite l'exercice 16 du TD1
        do{  
			system("cls");
            
printf("\n       ##################################################################\n");
printf("\n     ##                                                                   ##\n");
printf("\n    ###  EXERCICE 16:CALCULE D'UNE FONCTION A  PATIR D'UNE VALEUR NOMEE x ### \n ");
printf("\n     ##                                                                   ##\n");
printf("\n       ###################################################################\n");
            system("PAUSE");
            system("cls");
			printf("f(x)=x^2-8x+7");
            printf("\nentrer x:\n");
            scanf("%d",&x);
            f=(x*x)-(8*x)+7;
            printf("f(%d)=%f",x,f);
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
		break;//Fin de l'exercice 6
            
        case 7: //cas 7 ou on traite l'exercice 2 du TD2
        do{  
			system("cls");
            //fabs est utilisé pour donner la valeur absolue d'un nombre..
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###       EXERCICE 2:VALEUR ABSOLUE D'UN NOMBRE           ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer un nombre:\n");
            scanf("%d",&a);
            absolue =fabs(a); //fabs==> Pour calculer la valeur absolue d'un nombre reel
            printf("\nla valeur absolue est %f\n",absolue);
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
		break;
        
        case 8: //cas 8 ou on traite l'exercice 3 du TD2
        do{  
			system("cls");
            
printf("\n       #################################################################\n");
printf("\n     ##                                                                 ##\n");
printf("\n    ###      EXRCICE 3:TESTER UN NOMBRE SI IL EST DIVISIBLE PAR 3       ### \n ");
printf("\n     ##                                                                 ##\n");
printf("\n       #################################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer un nombre:\n");
            scanf("%d",&a);
        if(a%3==0)
        {
            printf("%d est divisible par 3\n",a);
        }else{
            printf("%d n'est pas divisible par 3",a);
        }
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);    
        break;
        
        case 9: //cas 9 ou on traite l'exercice 4 du TD2
        do{  
			system("cls");
            
printf("\n       ##################################################################\n");
printf("\n     ##                                                                  ##\n");
printf("\n    ###       EXERCICE 4:VERIFIER SI UN NOMBRE EST POSITIF OU NON        ### \n ");
printf("\n     ##                                                                  ##\n");
printf("\n       ##################################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer un nombre:\n");
            scanf("%d",&a);
        if(a>0)
        {
            printf("%d est positif\n",a);
        }else{
            printf("%d est negatif\n",a);
        }
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
		break;
        
        case 10: //cas 10 ou on traite l'exercice 5 du TD2
        do{  
			system("cls");
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###           EXERCICE 5:EQUATION SECOND DEGRES           ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
            printf("l'equation est de la forme ax^2 + bx +c\n");
            system("PAUSE");
            system("cls");
            printf("entrer a:\n");
            scanf("%d",&a);
            printf("entrer b:\n");
            scanf("%d",&b);
            printf("entrer c:\n");
            scanf("%d",&c);
            D=(b*b)-4*a*c;
            X1=(-b-sqrt(D))/2*a;
            X2=(-b+sqrt(D))/2*a;
            X=(-b)/2*a;
            if(D>0)
            {
                printf("les solutions de l'equation sont %f et %f\n",X1,X2);
            }
            else if(D<0)
            {
                printf("l'equation a une solution double %f\n",X);
            }
			else
            {
                printf("on n'a pas de solution\n");
            }
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 11: //cas 11 ou on traite l'exercice 6 du TD2
        do{  
			system("cls");
            
printf("\n       ##################################################################\n");
printf("\n     ##                                                                  ##\n");
printf("\n    ###    EXERCICE 6:DETERMINER LE SIGNE D'UN PRODUIT DE DEUX NOMBRES   ### \n ");
printf("\n     ##                                                                  ##\n");
printf("\n       ##################################################################\n");
            system("PAUSE");
            system("cls");
            printf("entrer un nombre:");
            scanf("%d",&a);
            printf("entrer un nombre:");
            scanf("%d",&b);
            if((a>0 && b>0) || (a<0 && b<0))
            {
                printf("\nle produit donne un nombre positif\n");
            }else{
                printf("\nle produit donne un nombre negatif\n");
            }
            printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);    
        break;
        
        case 12: //cas 12 ou on traite l'exercice 7 du TD2
        do{  
			system("cls");
            
printf("\n       ###################################################################################\n");
printf("\n     ##                                                                                   ##\n");
printf("\n    ###    EXERCICE 7:CALCULE LE PRIX A PAYER EN FAISANT INTERVENIR LE PORT ET LE REMISE  ### \n ");
printf("\n     ##                                                                                   ##\n");
printf("\n       ###################################################################################\n");
            system("PAUSE");
            system("cls");
            printf("\nentrer le prix unitaire d'un produit:\n");
            scanf("%f",&PU);
            printf("\nentrer la quantite commandee:\n");
            scanf("%d",&QTCOM);
            TOT=PU*QTCOM;
            printf("\nle prix des produits est %f",TOT);
            if(TOT>5000)
            {
                PORT=0;
            }else{
                PORT=0.02*TOT;
            }
            if(TOT>=2000 && TOT<=10000)
            {
                REM=0.05*TOT;
            }else if(TOT>10000){
                REM=0.1*TOT;
            }else{
                REM=0;
            }
            PAP=TOT+PORT-REM;
        printf("\nle prix a payer est %f",PAP);
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 13: //cas 13 ou on traite l'exercice 8 du TD2
        do{
		system("cls");
        
        char choix1;
printf("\n       #######################################################\n");
printf("\n     ##             T:CALCULE AIRE DU TRIANGLE                ## \n ");
printf("\n    ###                                                       ###\n");
printf("\n   ####             R:CALCULE AIRE DU RECCTANGLE              ####\n");
printf("\n    ###                                                       ###\n");
printf("\n     ##             C:CALCULE AIRE DU CERCLE                  ##\n");                                     
printf("\n       #######################################################\n");
        printf("\nentrer votre choix:");
        scanf("%s",&choix1);
        switch(choix1)
        {
        case'T': 
               printf("\nEntrer la base de ce triangle:");
               scanf("%f",&B);
               printf("\nEntrer l'hauteur de ce triangle:");
               scanf("%f",&H);
               A=(B*H)/2;
               printf("\nla surface de ce triangle est:%f",(B*H)/2);
        break;
        
        case'R': 
               printf("\nEntrer la longueur de ce rectangle:");
               scanf("%f",&l);
               printf("\nEntrer la largeur de ce rectangle:");
               scanf("%f",&L);
               A=L*l;
               printf("\nla surface de ce rectangle est:%f",l*L);
        break;
        
        case'C':
               printf("\nentrer le rayon de ce cercle:");
               scanf("%f",&r);
               A=PI*r*r;
               printf("\nla surface de cercle est:%f\n",3.14*r*r);
        }
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 14://cas 14 ou on traite l'exercice 9 du TD2
        do{
		system("cls");
printf("\n       ##########################################################\n");
printf("\n     ##                                                          ##\n");
printf("\n    ### EXERCICE 9: MULTIPLICATION PAR ADDITION SUCCESSIVE       ### \n ");
printf("\n     ##                                                          ##\n");
printf("\n       ##########################################################\n");
        system("PAUSE");
        system("cls");
        printf("\nentrer un nombre:");
        scanf("%d",&a); 
        printf("\nentrez en un autre:");     
        scanf("%d",&b);
        if(a>b)
        {
            for(i=1;i<=a;i++)
			{
                prod=prod+b;
            }
        }
        else
        {
            for(i=1;i<=b;i++)
            { 
              prod=prod+a;
            }
        }
        printf ("le produit est:%d \n",prod);
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 15: //cas 15 ou on traite l'exercice 10 du TD2
        do{
		system("cls");
        //On le traite avec la methode d'euclide..
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###    EXERCICE 10: CALCULE DU PGDC DE DEUX NOMBRE        ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
        system("PAUSE");    
        system("cls");
        int a,b,x,y,r;
        printf("\nentrer un nombre::");
        scanf("%d",&a); 
        printf("\nentrer un nombre::");
        scanf("%d",&b); 
        x=a;
        y=b;
        do
        {
            r=x%y;
            x=y;
            y=r;
        }
        while(y!=0);
        printf("\nPGDC=%d",x);
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 16://cas 16 ou on traite l'exercice 11 du TD2
        do{
		system("cls");
printf("\n       ############################################################################################\n");
printf("\n      #                                                                                            #   \n ");
printf("\n     ##                                                                                            ##\n");
printf("\n    ###             EXERCICE 11:     FAIRE UN CONTROLE DE SAISIE                                   ### \n ");
printf("\n     ##    LE PROGRAMME S'ARRETERA LORSQUE L'UTILISATEUR ENTRERA UN NOMBRE COMPRIS ENTRE 10 ET 20  ##\n");
printf("\n      #                                                                                            #\n");
printf("\n       ############################################################################################\n");
        system("PAUSE");
        system("cls");
        do{
        printf("entrer un nombre:\n");
        scanf("%d",&a);
              if(a<10)
              {
                   printf("plus grand!\n");
              }
              else if(a>20)
              {
                   printf("plus petit!\n");
              }
        }while(a<10 || a>20);
        if("a<10 && a>20")
        {
             printf("Le nombre que vous avez entre est compris entre 10 et 20\n");
        }
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");
        printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);
        break;
        
        case 17: //cas 17 ou on traite l'exercice 12 du TD2
        do{
		system("cls");
printf("\n       #######################################################\n");
printf("\n     ##                                                       ##\n");
printf("\n    ###  EXERCICE 12:CALCULE DE LA MOYENNE D'UNE CLASSE       ### \n ");
printf("\n     ##                                                       ##\n");
printf("\n       #######################################################\n");
system("PAUSE");
        system("cls");
        float moy;
        int i=0,somm=0;
		printf("VOUS DEVEZ ENTRER UN NOMBRE NEGATIF POUR NOUS SIGNALEZ QUE VOUS AVEZ TERMINE...\n");
		do{
              printf("entrer la note numero :");
              scanf("%f",&note);
              if(note<=20 && note>=0) //La note entree ne compte pas si elle est superieur à 20 ou inferieur à 0.
              {
             	    somm=somm+note;                                 
				    cpt++;
              }
        }while(cpt<1000 && note>=0);
        moy=somm/cpt;
        printf("\nla moyenne est %f\n",moy);
        printf("\n");
printf("\n       #######################################################\n");
printf("\n     ##           VOULEZ VOUS REFAIRE L'EXERCICE?             ##\n");
printf("\n    ###                  TAPER: 1------>OUI                   ### \n ");
printf("\n     ##                  TAPER: 2------>NON                   ##\n");
printf("\n       #######################################################\n");        
printf("\nentrer votre choix svp:");
        scanf("%d",&reponse);
        }while(reponse==1);        
        break;

        case 18: //Pour quitter l'application
		    system("cls");
        break;
        
        default:
		      system("cls"); 
              printf("\nVous avez fait un mauvais choix.\n");
              printf("\n");
			  system("PAUSE");
        }
        puts("\n");
        puts("\n");
        system("cls");
        printf("\n");
printf("\n       ###################################################################\n");
printf("\n     ##        VOUS ETES SUR LE POINT DE QUITTER L'APPLICATION.           ##\n");
printf("\n    ###                  TAPER: 1------>QUITTER                           ### \n ");
printf("\n     ##                  TAPER: 0------>MENU PRINCIPALE                   ##\n");
printf("\n       ###################################################################\n");
        printf("\nentrer votre choix svp:");
		scanf("%d",&rep);
    }while(rep==0);
  return 0;
}//fin main
