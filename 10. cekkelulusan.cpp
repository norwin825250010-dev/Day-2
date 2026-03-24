#include <stdio.h>
int main() {
    int nilai;
    printf("Masukkan nilai ujian: ");
    scanf("%d", &nilai);

    if (nilai >= 75) {
        printf("Selamat, Anda LULUS!\n");
    } else {
        printf("Maaf, Anda GAGAL.\n");
    }
    return 0;
}