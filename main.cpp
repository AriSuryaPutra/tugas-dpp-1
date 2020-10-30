#include <iostream>

using namespace std;

void pilihan(int opsi);

void luas_segitiga_siku_siku()
{
    system("CLS");
    int a, t, opsi;
    float luas;

    cout << "=========================================================" << endl;
    cout << "      Program Perhitungan Luas Segitiga Siku Siku        " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input panjang alas: ";
    cin >> a;
    cout << "  Silahkan input tinggi: ";
    cin >> t;
    luas = 0.5 * a * t;
    cout << "=========================================================" << endl;
    cout << "  Luas Segitiga Siku Siku adalah " << luas << endl;
    cout << "=========================================================" << endl;
    cout << "                         Selesai                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Hitung ulang                                        " << endl;
    cout << "  0. Kembali ke halaman utama                            " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;

    if (opsi == 1)
    {
        pilihan(1);
    }
    else if (opsi == 0)
    {
        pilihan(0);
    }
    else
    {
        cin.clear();
        cin.ignore();
    }
}

void persegi_panjang()
{
    system("CLS");
    int p, l, opsi;
    float luas;

    cout << "=========================================================" << endl;
    cout << "          Program Perhitungan Luas Persegi Panjang       " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input panjang: ";
    cin >> p;
    cout << "  Silahkan input lebar: ";
    cin >> l;
    luas = p * l;
    cout << "=========================================================" << endl;
    cout << "  Luas Persegi Panjang adalah " << luas << endl;
    cout << "=========================================================" << endl;
    cout << "                         Selesai                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Hitung ulang                                        " << endl;
    cout << "  0. Kembali ke halaman utama                            " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;

    if (opsi == 1)
    {
        pilihan(2);
    }
    else if (opsi == 0)
    {
        pilihan(0);
    }
    else
    {
        cin.clear();
        cin.ignore();
    }
}

void lingkaran()
{
    system("CLS");
    int r, opsi;
    float luas;

    cout << "=========================================================" << endl;
    cout << "            Program Perhitungan Luas Lingkaran           " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input jari-jari: ";
    cin >> r;
    luas = 3.14 * r * r;
    cout << "=========================================================" << endl;
    cout << "  Luas Lingkaran adalah " << luas << endl;
    cout << "=========================================================" << endl;
    cout << "                         Selesai                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Hitung ulang                                        " << endl;
    cout << "  0. Kembali ke halaman utama                            " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;

    if (opsi == 1)
    {
        pilihan(3);
    }
    else if (opsi == 0)
    {
        pilihan(0);
    }
    else
    {
        cin.clear();
        cin.ignore();
    }
}

void home()
{
    int opsi;

    system("CLS");

    cout << "                                  ``                     " << endl;
    cout << "                               .:/++//-`                 " << endl;
    cout << "                              -/+++++++/`                " << endl;
    cout << "                             :++++//++++.                " << endl;
    cout << "                           `:++++/`-++++-                " << endl;
    cout << "                          `/++++:` -////.                " << endl;
    cout << "             `.........` ./++++- `..............`        " << endl;
    cout << "             -mNNNNNNNo ./+++/- +mNNNNNNNNNNNNNNmy-      " << endl;
    cout << "              +mNNNNm/ -++++/.`smNNNNNNNNNNNNNNNNNm-     " << endl;
    cout << "               .::::- :++++/` .:::::::::::::/smNNNNo     " << endl;
    cout << "                    `/++++/`       .::::. :smNNNNNd.     " << endl;
    cout << "                   `/++++:         -++++- yNNNNmh/`      " << endl;
    cout << "                  ./+++/-          -++++- yNms:`         " << endl;
    cout << "                 -++++/.       `// -++++- /-             " << endl;
    cout << "                :++++/.     .+hmNs -++++-                " << endl;
    cout << "              `:++++/`  `:odmNNNNs -++++-                " << endl;
    cout << "             `/++++:``/ymNNNNNmho. -++++-                " << endl;
    cout << "            `/+++/::hmNNNNNmy/.    -++++-                " << endl;
    cout << "            -+++/-+mNNNmds:`       ./+++-                " << endl;
    cout << "             -//-sNNmho-            `-::.                " << endl;
    cout << "               `smy/.                                    " << endl;
    cout << "=========================================================" << endl;
    cout << "                       STMIK Primakara                   " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "               Nama   : I Kadek Ari Surya Putra          " << endl;
    cout << "               NIM    : 2001020014                       " << endl;
    cout << "               Prodi  : Teknik Informatika               " << endl;
    cout << "                                                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "              Program Tugas Mata Kuliah DPP              " << endl;
    cout << "                                                         " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Luas Segitiga Siku-Siku                             " << endl;
    cout << "  2. Luas Persegi Panjang                                " << endl;
    cout << "  3. Luas Lingkaran                                      " << endl;
    cout << "  9. Keluar                                              " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;
    pilihan(opsi);
}

int main()
{
    int opsi;

    system("CLS");

    cout << "                                  ``                     " << endl;
    cout << "                               .:/++//-`                 " << endl;
    cout << "                              -/+++++++/`                " << endl;
    cout << "                             :++++//++++.                " << endl;
    cout << "                           `:++++/`-++++-                " << endl;
    cout << "                          `/++++:` -////.                " << endl;
    cout << "             `.........` ./++++- `..............`        " << endl;
    cout << "             -mNNNNNNNo ./+++/- +mNNNNNNNNNNNNNNmy-      " << endl;
    cout << "              +mNNNNm/ -++++/.`smNNNNNNNNNNNNNNNNNm-     " << endl;
    cout << "               .::::- :++++/` .:::::::::::::/smNNNNo     " << endl;
    cout << "                    `/++++/`       .::::. :smNNNNNd.     " << endl;
    cout << "                   `/++++:         -++++- yNNNNmh/`      " << endl;
    cout << "                  ./+++/-          -++++- yNms:`         " << endl;
    cout << "                 -++++/.       `// -++++- /-             " << endl;
    cout << "                :++++/.     .+hmNs -++++-                " << endl;
    cout << "              `:++++/`  `:odmNNNNs -++++-                " << endl;
    cout << "             `/++++:``/ymNNNNNmho. -++++-                " << endl;
    cout << "            `/+++/::hmNNNNNmy/.    -++++-                " << endl;
    cout << "            -+++/-+mNNNmds:`       ./+++-                " << endl;
    cout << "             -//-sNNmho-            `-::.                " << endl;
    cout << "               `smy/.                                    " << endl;
    cout << "=========================================================" << endl;
    cout << "                       STMIK Primakara                   " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "               Nama   : I Kadek Ari Surya Putra          " << endl;
    cout << "               NIM    : 2001020014                       " << endl;
    cout << "               Prodi  : Teknik Informatika               " << endl;
    cout << "                                                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "              Program Tugas Mata Kuliah DPP              " << endl;
    cout << "                                                         " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Luas Segitiga Siku-Siku                             " << endl;
    cout << "  2. Luas Persegi Panjang                                " << endl;
    cout << "  3. Luas Lingkaran                                      " << endl;
    cout << "  9. Keluar                                              " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;
    pilihan(opsi);
}

void pilihan(int opsi)
{
    if (opsi == 1)
    {
        luas_segitiga_siku_siku();
    }
    else if (opsi == 2)
    {
        persegi_panjang();
    }
    else if (opsi == 3)
    {
        lingkaran();
    }
    else if (opsi == 0)
    {
        home();
    }
    else if (opsi == 9)
    {
        int main();
    }
    else
    {
        home();
    }
}
