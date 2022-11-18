#include <stdio.h>
int main(){
    printf("sayi gir");
    int girilenSayi;
    scanf("%d",&girilenSayi);
    for (int i = 0;i<=girilenSayi;++i) {
        for (int j = 0; j <i ; ++j) {
            printf("#");
        }
        printf("\n");
        }
}