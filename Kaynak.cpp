#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int ogrenciSayisi,ogrenciNo;
	double ogrenciGPA;
	string ogrenciAd;

	cout << "Sisteme Kaç Adet Öðrenci Gireceðinizi Yazýnýz: ";
	cin >> ogrenciSayisi;
	
	int* ptr = new int[ogrenciSayisi];
	double* ptr1 = new double[ogrenciSayisi];
	string* ptr2 = new string[ogrenciSayisi];

	cout << "Öðrencinin Numarasý, Ortalamasý ve Ýsmi Olacak Þekilde " << ogrenciSayisi << " Öðrenci Giriniz.";

	for (int i = 0; i < ogrenciSayisi; i++) {
		cin >> ogrenciNo;
		*(ptr + i) = ogrenciNo;

		cin >> ogrenciGPA;
		*(ptr1 + i) = ogrenciGPA;

		cin >> ogrenciAd;
		*(ptr2 + i) = ogrenciAd;

	}

	cout << "Öðrenci Listesi(numara, ortalama, isim):  " << endl;

	for (int i = 0; i < ogrenciSayisi; i++) {
		cout << *(ptr + i) << "| ";
		cout << *(ptr1 + i) << "| ";
		cout << *(ptr2 + i) << " " << endl;
		

	}

}
