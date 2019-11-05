// Jackpot! Game coded by Bilal Bağcıoğlu
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;

void Start();
void GetResults();

int i, j, life, maxrand;
char c;

void Start() {
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	
	cout << "Zorluk derecesini seçiniz:\n"; // Kullanıcı zorluk derecesini seçer.
	cout << "1 : Kolay (0-15)\n";
	cout << "2 : Orta Seviye (0-30)\n";
	cout << "3 : Zor (0-50)\n";
	cout << "veya çıkmak için herhangi bir tuşa basınız\n";
	c = 30;

	cin >> c;                   // Kullanıcı'nın kararını oku.
	cout << "\n";

	switch (c) {
		case '1':
			maxrand = 15;  //  0 ile maxrand arasında rastgele bir sayı olacak.
			break;
		case '2':
			maxrand = 30;
			break;
		case '3':
			maxrand = 50;
			break;
		default:
			exit(0);
		break;
	}

	life = 5;         // Kullanıcı'nın canı
	srand((unsigned)time(NULL)); // init Rand() fonksiyonu
	j = rand() % maxrand;  // j 0 ile maxrand arasında rastgele bir sayı getirir.
	
	GetResults();
}

void GetResults() {
	if (life <= 0) { // Kullanıcı'nın canı kalmazsa oyun biter
		cout << "Kaybettiniz !\n\n";
		Start();
	}

	cout << "Bir sayı girin: \n";
	cin >> i;
	
	if((i>maxrand) || (i<0)) { // Kullanıcı'nın girdiği sayı aralıkta değilse yeniden başlat
		cout << "Hata: sayı belirlenen aralıkta değil Max:\n" << maxrand;
		GetResults();
	}

	if(i == j) {
		cout << "KAZANDINIZ!\n\n"; // Kullanıcı sayıyı doğru tahmin eder
		Start();
	} else if(i>j) {
		cout << "Çok BÜYÜK\n";
		life = life - 1;
		cout << "Kalan Can: " << life << "\n\n";
		GetResults();
	} else if(i<j) {
		cout << "Çok KÜÇÜK\n";
		life = life - 1;
		cout << "Kalan Can: " << life << "\n\n";
		GetResults();
	}
}

int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	cout << "** Jackpot! Oyunu **\n";
	cout << "Oyunun amacı bir sayıyı tahmin etmektir\n";
	cout << "Jackpot! sana girdiğin sayının bulman gereken\n";
	cout << "sayıdan küçük veya büyük olduğunu söyleyecek.\n\n";
	Start();
	return 0;
}
