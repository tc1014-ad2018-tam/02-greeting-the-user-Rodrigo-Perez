#include <stdio.h>
//Rodrigo Perez Solis
//This program greets you according to the our you tell.
int main()
{
//Assign the hour variable
    int Hora;

    printf("What hour is it?"); //Ask for the hour
    scanf("%i", &Hora);
// TIME-RANGE ADJUSTMENT
    if (23 > Hora && Hora < 0) {
        printf("Sorry only hours from 0 to 23.");
    }

    else if (2 < Hora && Hora < 12) {
        printf("Good Morning!");
    }

    else if (19 > Hora && Hora >= 12 ) {
        printf("Good Afternoon!");
    }

    else if (22 > Hora && Hora >= 19) {
        printf("Good Evening!");
    }

    else if (Hora == 22) {
        printf("Good Night!");
    }

    else if (Hora == 23) {
        printf("Good Night!");
    }

    else if (Hora == 0) {
        printf("Good Night!");
    }

    else if (Hora == 1) {
        printf("Good Night!");
    }

    else if (Hora == 2) {
        printf("Good Night!");
    }
    return 0;
}