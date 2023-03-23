#include<iostream>

using namespace std;

int main() {
    //deklarasi variabel
    string satuan[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    string start, end, ulang;
    int x, y;
    float angka, hasil;

    do
    {
        //deteksi jumlah total array
        int a = sizeof(satuan)/sizeof(*satuan);

        cout << "=======================" << endl;
        cout << "Konversi Satuan" << endl;
        cout << "=======================" << endl;

        cout << "Angka \t\t : "; cin >> angka;
        cout << "Satuan awal \t : "; cin >> start;
        cout << "Satuan akhir \t : "; cin >> end;

        //deteksi input berdasarkan total array dan urutan satuan
        for(int f = 0; f < a; f++){
            if(start == satuan[f]){
                x = f + 1;
            }
            if(end == satuan[f]){
                y = f + 1;
            }
        }

        //deteksi operasi perkalian atau pembagian
        hasil = angka;
        if(x < y){
            int z = y - x;
            for(int k = 0; k < z; k++){
            hasil *= 10; 
            }
        } else if(x > y){
            int z = x - y;
            for(int k = 0; k < z; k++){
            hasil /= 10; 
            }
        } else {
            hasil = angka;
        }

        //hasil
        cout << "-----------------------" << endl;
        cout << "Hasil konversi" << endl;
        cout << angka << " " << start << " = " << hasil << " " << endl;

        cout << "Ulangi program (y/n) : ";
        cin >> ulang;
    } while (ulang == "y");

    cout << "---- Program Selesai ----";
    
    
}