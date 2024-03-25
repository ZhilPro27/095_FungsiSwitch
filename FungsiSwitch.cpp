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

int main(){

}