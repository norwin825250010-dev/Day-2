#include <stdio.h>

int main (){
    int sisi, volume;

    printf("Masukkan panjang sisi kubus : ");
    scanf("%d", &sisi);

    volume = sisi*sisi*sisi;

    printf("Volume kubus adalah %d", volume);

    return 0;
}