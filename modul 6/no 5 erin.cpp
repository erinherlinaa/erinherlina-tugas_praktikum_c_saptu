#include <stdio.h>

int main() {
    // Deklarasi variabel
    double saldo = 1000000; // Saldo awal Rp. 1.000.000
    double bunga = 0.02;    // Bunga 2% per bulan
    int bulan;

    // Loop untuk menghitung bunga selama 10 bulan
    for (bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga; // Tambahkan bunga ke saldo
        printf("Bulan %d: Rp. %.2f\n", bulan, saldo); // Cetak saldo setiap bulan
    }

    // Cetak saldo akhir setelah 10 bulan
    printf("\nJumlah uang setelah 10 bulan: Rp. %.2f\n", saldo);

    return 0;
}


