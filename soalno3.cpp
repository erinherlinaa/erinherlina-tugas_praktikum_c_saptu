#include <iostream>
using namespace std;

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Input jam masuk dan jam keluar
    cout << "Jam masuk : ";
    cin >> jamMasuk;
    cout << "Jam keluar : ";
    cin >> jamKeluar;

    // Menghitung lama parkir (selisih jam keluar dan jam masuk)
    if (jamKeluar < jamMasuk) {
        cout << "Jam keluar tidak valid! Jam keluar harus lebih besar atau sama dengan jam masuk." << endl;
        return 1;
    }
    lamaParkir = jamKeluar - jamMasuk;

    // Menentukan biaya parkir
    if (lamaParkir <= 2) {
        biaya = 2000;  // Untuk 2 jam pertama, biaya tetap 2000
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500;  // Biaya 500 per jam setelah 2 jam
    }

    // Menampilkan hasil
    cout << "Lama parkir : " << lamaParkir << " jam" << endl;
    cout << "Biaya parkir : Rp " << biaya << endl;

    return 0;
}
