#include <stdio.h>

int main() {
    int arabaModeli;
    float renultBenzin = 0, mazdaBenzin = 0, hondaBenzin = 0, fordBenzin = 0, benzin;
    int renultSayi = 0, mazdaSayi = 0, hondaSayi = 0, fordSayi = 0, gelis = 1;
    for (int i = 0; i < 1; i++) {
        printf("araba modeli ve benzin miktarini girin\n");
        scanf("%d", &arabaModeli);
        if (arabaModeli == 1) {
            scanf("%f", &benzin);
            renultBenzin += benzin;
            renultSayi += gelis;
            i--;
        } else if (arabaModeli == 2) {
            scanf("%f", &benzin);
            mazdaBenzin += benzin;
            mazdaSayi += gelis;
            i--;
        } else if (arabaModeli == 3) {
            scanf("%f", &benzin);
            hondaBenzin += benzin;
            hondaSayi += gelis;
            i--;
        } else if (arabaModeli == 4) {
            scanf("%f", &benzin);
            fordBenzin += benzin;
            fordSayi += gelis;
            i--;
        } else if (arabaModeli == 111) {
            i += 1;
        } else {
            i--;
        }
    }

    //GELİŞ SAYİSİ
    int maxsayi;

    if (renultSayi > mazdaSayi && renultSayi > hondaSayi && renultSayi > fordSayi) {
        maxsayi = renultSayi;
        //15
    } else if (mazdaSayi > hondaSayi && mazdaSayi > fordSayi) {
        maxsayi = mazdaSayi;
        //25
    } else if (hondaSayi > fordSayi) {
        maxsayi = hondaSayi;
        //35
    } else {
        maxsayi = fordSayi;
        //45
    }
    //araç modeli tanımlama için yeniden if else
    if (mazdaSayi == renultSayi) {
        printf("en cok gelen arac markası : renult (%d kez)\n", maxsayi);
    } else if (maxsayi == mazdaSayi) {
        printf("en cok gelen arac markası : mazda (%d kez)\n", maxsayi);
    } else if (maxsayi == hondaSayi) {
        printf("en cok gelen arac markası: honda (%d kez)\n", maxsayi);
    } else if (maxsayi == fordSayi) {
        printf("en cok gelen arac markası : ford (%d kez)\n", maxsayi);
    }

//BENZİN
    float maxBenzin;

    if (renultBenzin > mazdaBenzin && renultBenzin > hondaBenzin && renultBenzin > fordBenzin) {
        maxBenzin = renultBenzin;
        //15
    } else if (mazdaBenzin > hondaBenzin && mazdaBenzin > fordBenzin) {
        maxBenzin = mazdaBenzin;
        //25
    } else if (hondaBenzin > fordBenzin) {
        maxBenzin = hondaBenzin;
        //35
    } else {
        maxBenzin = fordBenzin;
        //45
    }

    if (maxBenzin == renultBenzin) {
        printf("en cok satıs yaoılan marka renult (%.2f)", maxBenzin);
    }        else if (maxBenzin == mazdaBenzin) {
        printf("en cok satıs yaoılan marka : mazda(%.2f)\n", maxBenzin);
    } else if (maxBenzin == hondaBenzin) {
        printf("en cok satıs yaoılan marka : honda(%.2f)\n", maxBenzin);
    } else if (maxBenzin == fordBenzin) {
        printf("en cok satıs yaoılan marka : ford(%.2f)\n", maxBenzin);
    }

    return 0;
}




