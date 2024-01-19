#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int wybor;
    float dlugosc_prostokata, szerokosc_prostokata, pole_prostokata;
    float promien_kola, pole_kola;

    printf("Menu:\n");
    printf("1. Pole prostokata\n");
    printf("2. Pole kola\n");
    printf("Wybierz opcje (1 lub 2): ");
    scanf("%d", &wybor);

    switch (wybor) {
        case 1:
            printf("Podaj dlugosc prostokata: ");
            scanf("%f", &dlugosc_prostokata);
            printf("Podaj szerokosc prostokata: ");
            scanf("%f", &szerokosc_prostokata);
            pole_prostokata = dlugosc_prostokata * szerokosc_prostokata;
            printf("Pole prostokata wynosi: %.2f\n", pole_prostokata);
            break;

        case 2:
            printf("Podaj promien kola: ");
            scanf("%f", &promien_kola);
            pole_kola = PI * pow(promien_kola, 2);
            printf("Pole kola wynosi: %.2f\n", pole_kola);
            break;

        default:
            printf("Niepoprawny wybor.\n");
            return 1;
    }

    return 0;
}
