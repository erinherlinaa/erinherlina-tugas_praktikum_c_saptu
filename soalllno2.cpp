def lama_bekerja(jam_masuk, jam_keluar):
    # Menghitung lama bekerja
    if jam_keluar >= jam_masuk:
        lama = jam_keluar - jam_masuk
    else:
        lama = (12 - jam_masuk) + jam_keluar
    
    return lama

# Input jam masuk dan jam keluar
jam_masuk = int(input("Jam masuk (1-12): "))
jam_keluar = int(input("Jam keluar (1-12): "))

# Validasi input
if 1 <= jam_masuk <= 12 and 1 <= jam_keluar <= 12:
    lama = lama_bekerja(jam_masuk, jam_keluar)
    print(f"Lama bekerja: {lama} jam")
else:
    print("Jam masuk dan jam keluar harus antara 1 dan 12.")