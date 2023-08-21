#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");

    //déclaration des variables

    float a,b,c,Delta,p,t,t0,t1,t2,x,x0,x1,x2,x3,x4,x5,x6;

    //message d'acceuil et entrée des coefficients de l'équation bicarrée

    printf("Hello cher utilisateur, nous allons résoudre ensemble une équation bicarrée de votre choix dans R");
    printf("\nEntrez les coefficients a,b,c à la suite :  ");
    printf("\nEntrez a : ");
    scanf("%f",&a);
    printf("Entrez b : ");
    scanf("%f",&b);
    printf("Entrez c : ");
    scanf("%f",&c);
    printf("\nl'équation à résoudre est %.2fX^4+%.2fX^2+%.2f = 0\n",a,b,c);
    printf("\nEn ramenant l'équation en degré 2 ,la nouvelle équation est %.2ft^2+%.2ft+%.2f = 0\n\n",a,b,c);

    //affectation des valeurs

    Delta=b*b-(4*a*c);
    p=sqrt(Delta);
    t0=-b/(2*a);
    t1=(-b-p)/2*a;
    t2=(-b+p)/2*a;
    t=-c/b;
    x=sqrt(t0);
    x0=-sqrt(t0);
    x1=sqrt(t1);
    x2=-sqrt(t1);
    x3=sqrt(t2);
    x4=-sqrt(t2);
    x5=sqrt(t);
    x6=-sqrt(t);

    if(a==0 && b==0 && c==0)
    {
        printf("tout réel est solution de l'équation");
    }
    else if(a==0 && b==0 && c!=0)
    {
        printf("l'équation n'admet pas de solution");
    }
    else if(a==0 && b!=0 && c!=0)
    {
        if(t<0)
        {
            printf("l'équation n'admet pas de solution");
        }
        else
        {
            printf("les solution de l'équation sont %.3f et %.3f",x5,x6);
        }
    }
    else if(a==0 || b==0 && c==0)
    {
        printf("la solution unique de l'équation est %.3f",0);
    }
    else
    {
        if(Delta<0)
        {
            printf("l'équation n'admet pas de solutions\n");
        }
        else if(Delta==0)
        {
            if(t0<0)
            {
                printf("l'équation n'admet pas de solutions\n");
            }
            else
            {
                printf("les solutions de l'équation sont %.3f et %.3f\n",x,x0);
            }
        }
        else
        {
            if(t1>=0 && t2>=0)
            {
                printf("les solutions de l'équation sont %.3f,%.3f,%.3f et %.3f",x1,x2,x3,x4);
            }
            else if(t1>=0 && t2<0)
            {
                printf("les solutions de l'équation sont %.3f et %.3f",x1,x2);
            }
            else if(t1<0 && t2>=0)
            {
                printf("les solutions de l'équation sont %.3f et %.3f",x3,x4);
            }
            else
            {
                printf("l'équation n'admet pas de solutions\n");
            }
        }
    }
    return 0;
}
