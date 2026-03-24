#include<stdio.h>

int main(){
    float luas, alas, tinggi;

    printf("Masukkan alas segitiga : ");
    scanf("%f", &alas);

    printf("Masukkan tinggi : ");
    scanf("%f", &tinggi);

    luas=0.5*alas*tinggi;

    printf ("luas segitiga adalah : %.2f", luas);

    return 0;

}