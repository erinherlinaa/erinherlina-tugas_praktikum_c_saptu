#include <stdio.h>

int main() {
    // Deklarasi variabel
    int nilai = 1; // Inisialisasi nilai awal

    printf("Deret: ");
    
    // Perulangan untuk mencetak deret
    for (int i = 0; i < 11; i++) { 
        printf("%d ", nilai); // Cetak nilai saat ini
        nilai *= 2;           // Kalikan nilai dengan 2 untuk mendapatkan nilai berikutnya
    }

    printf("\n"); // Baris baru setelah selesai
    return 0;
}

