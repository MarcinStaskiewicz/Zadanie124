
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;


    float a;
    float b;
    float h;
    float pole_prostokata;
    float pole_trojkata;




    do
    {
    printf ("\nNacisnij 1 jesli chcesz obliczyc pole prostokata \nNacisnij 2 jesli chcesz obliczyc pole trojkata \nInna liczba = brak opcji\n");




    scanf ("%d", &liczba);

    switch(liczba)
{



case 1:
    printf ("Podaj dlugosc boku a\n");
    scanf ("%f", &a);
    printf ("Podaj dlugosc boku b\n");
    scanf ("%f", &b);

    pole_prostokata = ((a*b));

    printf("Pole prostokata wynosi:%f\n", pole_prostokata);
break;

case 2:

    printf ("Podaj dlugosc boku a\n");
    scanf ("%f", &a);
    printf ("Podaj wysokoœæ h\n");
    scanf ("%f", &h);
    pole_trojkata = (a * h)/2;
    printf("Pole trojkata wynosi:%f\n", pole_trojkata);

    default:
        printf("\nBrak opcji\n");
break;
}

    }while(liczba > 0);




    return 0;



}
