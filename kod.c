#include <stdio.h>

int main() {

    float dlugosc, szerokosc, pole;



    printf("Podaj dlugosc prostokata: ");

    scanf("%f", &dlugosc);



    printf("Podaj szerokosc prostokata: ");

    scanf("%f", &szerokosc);



    pole = dlugosc * szerokosc;



    printf("Pole prostokata wynosi: %.2f\n", pole);

    return 0;

}
