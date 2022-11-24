#include <stdio.h>

float ort (float vize,float final){
    float ortalama;
    ortalama = (vize + final)/2;
    return ortalama;
}
int main() {
    for(int i=0;i<1;i++) {
        float vize;
        float final;
        float ortalama;
        printf("vize ve final gir \n");
        scanf("%f", &vize);
        if(vize==-1){
            break;
        }
        else{
            i--;
        }
        scanf("%f", &final);

        ortalama=ort(vize,final);
        printf("%f\n", ortalama);

    }
    return 0;
}


