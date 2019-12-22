//Kullanıcıdan bir kelime iste.
//Tersten okununup okunmadığını kontrol et.
//Sonucu ekrana yazdır.

// 2.Soru
#include <iostream>

using namespace std;

int Palindrom(string, int, int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sonKarakter;
	string kelime;
	
	cout<<"Kontrol etmek istediğiniz kelimeyi giriniz : ";
	cin>>kelime;
	
	sonKarakter=kelime.length();
	Palindrom(kelime, 0, sonKarakter-1);
}


int Palindrom(string kelime, int ilkKarakter, int sonKarakter)
{
	if(kelime[ilkKarakter] == kelime[sonKarakter])
	{
		if(sonKarakter>ilkKarakter)
		{
		Palindrom(kelime, ilkKarakter+1, sonKarakter-1);
		}
		
		else
		{
		cout<<"Bu kelimenin tersten okunuşu aynıdır !";
		}
	}
	
	else
	{
	cout<<"Bu kelimenin tersten okunuşu aynı değildir !";
	}
	
	cout << "\n\n";
	
return main();
}

// Önemli Not = Büyük ve Küçük Harf duyarlılığı yoktur !

// Bilal BAĞCIOĞLU
// 19332629062
// Elektrik-Elektronik Mühendisliği
