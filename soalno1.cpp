#include <iostream>
using namespace std;

int main() {
    int jamMasuk, jamPulang, lamaBekerja;

    // Input jam masuk dan jam pulang
    cout << "Jam masuk (1-12): ";
    cin >> jamMasuk;
    cout << "Jam pulang (1-12): ";
    cin >> jamPulang;

    // Menghitung lama bekerja
    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        lamaBekerja = (12 - jamMasuk) + jamPulang;
    }

    // Menampilkan hasil
    cout << "Lama bekerja: " << lamaBekerja << " jam" << endl;

    return 0;
}
