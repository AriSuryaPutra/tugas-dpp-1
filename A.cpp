#include <iostream>

using namespace std;

int main()
{
    system("CLS");
    int r, opsi;
    float luas;

    cout << "=========================================================" << endl;
    cout << "            Program Perhitungan Luas Lingkaran           " << endl;
    cout << "=========================================================" << endl;
    cout << "  Silahkan input jari-jari: ";
    cin >> r;
    const float phi = 3.14;
    luas = phi * r * r;
    cout << "=========================================================" << endl;
    cout << "  Luas Lingkaran adalah " << luas << endl;
    cout << "=========================================================" << endl;
    cout << "                         Selesai                         " << endl;
    cout << "=========================================================" << endl;
    cout << "                                                         " << endl;
    cout << "  Silahkan input opsi:                                   " << endl;
    cout << "  1. Hitung ulang                                        " << endl;
    cout << "  0. Exit                                                " << endl;
    cout << "                                                         " << endl;
    cout << "  Pilih Opsi: ";
    cin >> opsi;

    if (opsi == 1)
    {
        main();
    }
    else
    {
        cin.clear();
        cin.ignore();
    }
}