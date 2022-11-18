#include <stdio.h>

int main() {
    printf("sırasıyla araba , gun ve");
    char arabalar;
    int gun,km,toplam;

    scanf("%c %d %d",&arabalar ,&gun,&km);

    switch (arabalar) {
            case 'A':
            toplam = 20*gun+18*km;
            printf("toplam ucret %d",toplam);
            break;

            case 'a':
            toplam = 20*gun+18*km;
            printf("toplam ucret %d",toplam);
            break;

            case 'B':
            toplam = 32*gun+22*km;
            printf("toplam ucret %d ",toplam);
            break;

            case 'b':
            toplam = 32*gun+22*km;
            printf("toplam ucret %d",toplam);
            break;

            case 'S':
            toplam = 43*gun+28*km;
            printf("toplam ucret %d ",toplam);
            break;

            case 's':
            toplam = 43*gun+28*km;
            printf("toplam ucret %d",toplam);
            break;

            case 'P':
            toplam = 51*gun+36*km;
            printf("toplam ucret %d",toplam);
            break;

            case 'p':
            toplam = 51*gun+36*km;
            printf("toplam ucret %d ",toplam);
            break;
    }

    return 0;
}
