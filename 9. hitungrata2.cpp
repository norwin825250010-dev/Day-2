#include<stdio.h>

int main(){
    int a1, a2, a3;
    int rata ;

    printf("Masukkan angka pertama : ");
    scanf("%d", &a1);

    printf("Masukkan angka kedua : ");
    scanf("%d", &a2);
    
    printf("Masukkan angka ketiga : ");
    scanf("%d", &a3);

    rata = (a1+a2+a3)/3;

    printf("Rata rata adalah %d", rata);

    return 0;
}