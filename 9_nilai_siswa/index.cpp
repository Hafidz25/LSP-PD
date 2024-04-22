#include<iostream>

using namespace std;

int main() {
    //deklarasi variabel
    string siswa[] = {"Bagas", "Firdauuuuuuuuuus", "Hafidz", "Innamaaa"};
    int nilai[] = {94, 92, 90, 95};
    string nama, ulang;
    int x, y;

    do
    {
        //deteksi jumlah total array
        int a = sizeof(siswa)/sizeof(*siswa);
        // int b = sizeof(nilai)/sizeof(*nilai);

        cout << "Masukan nama siswa : "; cin >> nama;

        //deteksi input berdasarkan total array dan urutan siswa
        for(int f = 0; f < a; f++){
            if(nama == siswa[f]){
                x = f;
            }
        }

        cout << "Nilai : " << nilai[x] << endl;
        cout << "-----------------------" << endl;

        cout << "Ulangi program (y/n) : ";
        cin >> ulang;

    } while (ulang == "y");

    cout << "---- Program Selesai ----";
    
}
