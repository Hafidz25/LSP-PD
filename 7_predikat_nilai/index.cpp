#include<iostream>

using namespace std;

int main() {
    //deklarasi variabel
    int nilai;
    string rank, x;

    do
    {
        cout << "---------------------" << endl;
        cout << "Predikat Nilai" << endl;
        cout << "---------------------" << endl;

        cout << "Masukan nilai : "; cin >> nilai;

        //cek predikat nilai
        if(nilai <= 40 && nilai >= 0){
            rank = "E";
        } else if (nilai <= 60 ){
            rank = "D";
        } else if (nilai <= 75){
            rank = "C";
        } else if (nilai <= 85){
            rank = "B";
        } else if (nilai <= 100){
            rank = "A";
        } else {
            rank = "Nilai tidak sesuai";
        }
        
        cout << "Predikat : " << rank << endl;
        cout << "-----------------------" << endl;

        cout << "Ulangi program (y/n) : ";
        cin >> x;

        
    } while (x == "y");

    cout << "---- Program Selesai ----";
    
}