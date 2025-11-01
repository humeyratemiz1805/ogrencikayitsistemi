/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Ogrenci {
protected:
    string adi;
    string soyadi;
    string nosu;
    string sinifi;

public:
    void ogrencibilgileri (int ogrenciNo) {
        cout << ogrenciNo + 1 << ". öğrencinin adını girin: ";
        cin >> adi;
        cout << ogrenciNo + 1 << ". öğrencinin soyadını girin: ";
        cin >> soyadi;
        cout << ogrenciNo + 1 << ". öğrencinin nosunu girin: ";
        cin >> nosu;
        cout << ogrenciNo + 1 << ". öğrencinin sınıfını girin: ";
        cin >> sinifi;
    }

    void bilgileriYazdir() {
        cout << "Adı: " << adi << ", Soyadı: " << soyadi<< ", Nosu: " << nosu << ", Sınıfı: " << sinifi << endl;
    }
};

void ogrencileriListele(Ogrenci ogr[], int n) {
    cout << "\n--- Kaydedilen Öğrenciler ---" << endl;
    for (int i = 0; i < n; i++) {
        ogr[i].bilgileriYazdir();
    }
}

int main() {
    int ogrenciSayisi;
    cout << "Kaç öğrenci kaydedilecek? ";
    cin >> ogrenciSayisi;

    if (ogrenciSayisi <= 0) {
        cout << "Geçersiz işlem!" << endl;
        return 0;
    }

    Ogrenci ogrenciler[20]; 
    
    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << "\n📝 ~~" << i + 1 << ". Öğrenci Bilgileri ~~📝\n";
        ogrenciler[i].ogrencibilgileri(i);
    }

    ogrencileriListele(ogrenciler, ogrenciSayisi);

    return 0;
}
