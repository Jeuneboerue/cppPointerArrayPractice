#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int ogrenciSayisi,ogrenciNo;
	double ogrenciGPA;
	string ogrenciAd;

	cout << "Sisteme Ka� Adet ��renci Girece�inizi Yaz�n�z: ";
	cin >> ogrenciSayisi;
	
	int* ptr = new int[ogrenciSayisi];
	double* ptr1 = new double[ogrenciSayisi];
	string* ptr2 = new string[ogrenciSayisi];

	cout << "��rencinin Numaras�, Ortalamas� ve �smi Olacak �ekilde " << ogrenciSayisi << " ��renci Giriniz.";

	for (int i = 0; i < ogrenciSayisi; i++) {
		cin >> ogrenciNo;
		*(ptr + i) = ogrenciNo;

		cin >> ogrenciGPA;
		*(ptr1 + i) = ogrenciGPA;

		cin >> ogrenciAd;
		*(ptr2 + i) = ogrenciAd;

	}

	cout << "��renci Listesi(numara, ortalama, isim):  " << endl;

	for (int i = 0; i < ogrenciSayisi; i++) {
		cout << *(ptr + i) << "| ";
		cout << *(ptr1 + i) << "| ";
		cout << *(ptr2 + i) << " " << endl;
		

	}

}
