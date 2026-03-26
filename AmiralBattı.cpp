#include <iostream>
using namespace std; 

int main() {

	bool ships[5][5]{
		{0 , 0 , 1 , 1 , 0} ,
		{0 , 1 , 0 , 0 , 0} ,
		{0 , 0 , 0 , 0 , 1} ,
		{0 , 0 , 1 , 0 , 0} ,
		{1 , 0 , 0 , 1 , 0}
	};

	int hits = 0, turSayisi = 0;
	int row, column;

	while (hits < 7) {
		cout << "Satir sayisi giriniz ( 0 ve 4 araliginde olmali ) : ";
		cin >> row;
		if (row < 0 || row > 4) {
			cout << "HATA! Gecersiz aralikta bir sayi girdiniz. " << "\n";
			continue;
		}
		cout << "Sutun sayisi giriniz ( 0 ve 4 araliginde olmali ) : ";
		cin >> column;
		if (column < 0 || column > 4) {
			cout << "HATA! Gecersiz aralikta bir sayi girdiniz. " << "\n";
			continue;
		}

		if (ships [row][column]) {
			ships[row][column] = 0;
			cout << "Tam isabet, gemiyi vurdunuz!" << "\n";
			hits++;
			cout << (7 - hits) << " " << "adet gemi kaldi!"<<"\n\n";
		}
		else {
			cout << "Iskaladin!"<<"\n\n";
		}
		turSayisi++;

	}
	cout << "Tebrikler! " << turSayisi << "." << "turda kazandiniz!"<<"\n";






	return 0;
}