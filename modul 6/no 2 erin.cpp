#include <stdio.h>

int main() {
    // Deklarasi variabel
    int nilai = 100; // Nilai awal

    printf("Deret: ");
    
    // Perulangan untuk mencetak deret
    for (int i = 0; i < 10; i++) { 
        printf("%d ", nilai); // Cetak nilai saat ini
        nilai -= 5;           // Kurangi nilai dengan 5 untuk nilai berikutnya
    }

    printf("\n"); // Baris baru setelah selesai
    return 0;
}

