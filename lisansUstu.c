#include <stdio.h>

int main() {
    float ales,agno,dil,sonuc;
    printf("sırasıyla ales puanı yabancı dil puanı ve agnoyu giriniz");
    scanf("%f %f %f",&ales,&dil,&agno);
    if(agno<=100&&dil<=100&&ales<=100) {
        sonuc = (ales / 2) + (dil / 4) + (agno / 4);
        printf("%.2f", sonuc);
    }
    else{
        printf("hata");
    }

    return 0;
}
