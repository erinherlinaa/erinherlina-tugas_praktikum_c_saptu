#include <stdio.h>

int main() {
    // Deklarasi variabel
    int kecepatan = 2; // Kecepatan tetap dalam meter/detik
    int waktu = 100;   // Waktu dalam detik
    int jarak;

    // Hitung jarak tempuh
    jarak = kecepatan * waktu;

    // Cetak hasil
    printf("Jarak yang ditempuh dalam %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}

