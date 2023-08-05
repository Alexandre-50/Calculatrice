#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float Addition(float V1,float V2)
{
    return V1+V2;
}

float Soustraction(float V1,float V2)
{
    return V1-V2;
}

float Multiplication(float V1,float V2)
{
    return V1*V2;
}

float Division(float V1,float V2)
{
   return V1/V2;
}

float Puissance(float V1,float V2)
{
    return pow(V1,V2);
}

float Carre(float V1)
{
    return sqrt(V1);
}
int main()
{
    float Valeur1;
    float Valeur2;
    float Resultat;
    char Operateur;
    int nbOperations=0;
    do{
        printf("Veuillez saisir l'operation %d\n",nbOperations+1);
        scanf("%f %c %f",&Valeur1,&Operateur,&Valeur2);
        switch(Operateur)
        {
            case '+':
            Resultat=Addition(Valeur1,Valeur2);
            break;
            case '-':
            Resultat=Soustraction(Valeur1,Valeur2);
            break;
            case '*':
            Resultat=Multiplication(Valeur1,Valeur2);
            break;
            case '/':
            Resultat=Division(Valeur1,Valeur2);
            break;
            case '^':
            Resultat=Puissance(Valeur1,Valeur2);
            break;
            case ' ':
            Resultat=Carre(Valeur1);
            break;
            default:
            return 0;
        }
        printf("Le resultat est %f\n",Resultat);
        nbOperations++;
    }while(Operateur!=',');
}
