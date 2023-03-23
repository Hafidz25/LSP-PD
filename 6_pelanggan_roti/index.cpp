#include<iostream>

using namespace std;

int main() {
    //deklarasi variabel
    string status, x;
    int jml_roti, bonus, total_bonus, total_terima;

    do
    {
        //input status pelanggan
        cout << "Status pelanggan (y/n) : ";
        cin >> status;

        //cek status pelanggan
        if(status == "y") {
            //kondisi jika pelanggan -> y
            bonus = 3;
            cout << "----------------------------" << endl;
            cout << "Jumlah roti \t: "; cin >> jml_roti;
            total_bonus = jml_roti / 20 * bonus;
            cout << "Bonus \t\t: " << total_bonus << " roti" << endl;
            total_terima = jml_roti + total_bonus;
            cout << "Total terima \t: " << total_terima << " roti" << endl;
            cout << "----------------------------" << endl;
        } else if(status == "n") {
            //kondisi jika pelanggan -> n
            bonus = 1;
            cout << "----------------------------" << endl;
            cout << "Jumlah roti \t: "; cin >> jml_roti;
            total_bonus = jml_roti / 20 * bonus;
            cout << "Bonus \t\t: " << total_bonus << " roti" << endl;
            total_terima = jml_roti + total_bonus;
            cout << "Total terima \t: " << total_terima << " roti" << endl;
            cout << "----------------------------" << endl;

            
        }
        
        cout << "Ulangi program (y/n) : ";
        cin >> x;
    } while (x == "y");

    cout << "---- Program Selesai ----";
    
}