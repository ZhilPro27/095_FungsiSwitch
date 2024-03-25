#include <iostream>
using namespace std;

int bil1, bil2; //Deklarasi variable global

void input() {  //Prosedur input
    cout << "Masukkan bilangan pertama = ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua = ";
    cin >> bil2;
}


float penjumlahan(float a, float b){    //Fungsi penjumlahan
    return a + b;
}

float pengurangan(float a, float b){    //Fungsi pengurangan
    return a - b;
}

float perkalian(float a, float b){      //Fungsi Perkalian
    return a * b;
}

float pembagian(float a, float b){      //Fungsi Pembagian
    return a / b;
}

int main(){
    int pilihan;    //Deklarasi variable untuk menentukan pilihan

    cout << "===================" << endl; //Pilihan Menu
    cout << "MENU" << endl;
    cout << "1. Penjumlahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian " << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. EXIT " << endl;
    cout << "Masukkan pilihan 1/2/3/4/5 = ";
    cin >> pilihan;

    switch (pilihan){   //Switch case
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(bil1, bil2) << endl;
            break;
        case 2:
            input();
            cout << "Hasil pengurangan = " << pengurangan(bil1, bil2) << endl;
            break;
        case 3:
            input();
            cout << "Hasil perkalian = " << perkalian(bil1, bil2) << endl;
            break;
        case 4:
            input();
            cout << "Hasil pembagian = " << pembagian(bil1, bil2) << endl;
            break;
    }
}