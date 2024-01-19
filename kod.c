#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
   float dlugosc_prostokata, szerokosc_prostokata, pole_prostokata;
   printf("Podaj dlugosc prostokata: ");
   scanf("%f", &dlugosc_prostokata);
   printf("Podaj szerokosc prostokata: ");
   scanf("%f", &szerokosc_prostokata);
   pole_prostokata = dlugosc_prostokata * szerokosc_prostokata;
   printf("Pole prostokata wynosi: %.2f\n", pole_prostokata);
   float promien_kola, pole_kola;
   printf("Podaj promien kola: ");
   scanf("%f", &promien_kola);
   pole_kola = PI * pow(promien_kola, 2);
   printf("Pole kola wynosi: %.2f\n", pole_kola);
   return 0;
}


