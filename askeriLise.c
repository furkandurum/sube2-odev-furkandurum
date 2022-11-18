#include <stdio.h>
int main() {
    float yas,boy,kilo,vki;
    printf("sırasıyla yaş,boy ve kilo girin ");
    scanf("%f %f %f",&yas,&boy,&kilo);
    vki=kilo/(boy*boy);
    if(boy<2.3) {
        if (18.5 <vki && vki < 24.5 && yas > 13 && yas < 17) {
            printf("kabul edildi\n");
            printf("%f", vki);
        } else {
            printf("red edildi\n");
            printf("%f", vki);
        }
    }
    else {
        printf("hata");
    }
    return 0;
}



