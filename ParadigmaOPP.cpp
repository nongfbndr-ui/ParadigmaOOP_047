#include <iostream>
using namespace std;

class Barang {
public:
    string nama, kategori, tanggalProduksi;
    int jumlah;

    void tampil() {
        cout << nama << " | " << jumlah << " | "
             << kategori << " | " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik, nonElektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024";

    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2023";

    elektronik.tampil();
    nonElektronik.tampil();

    return 0;
}