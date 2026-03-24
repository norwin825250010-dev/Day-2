#include<stdio.h>

int main(){
    float keliling, r;
    float phi = 3.14;

    printf("Masukkan Jari jari lingkaran : ");
    scanf("%f", &r);

    keliling=2*phi*r;

    printf ("Keliling Lingkaran adalah : %.2f", keliling);

    return 0;

}