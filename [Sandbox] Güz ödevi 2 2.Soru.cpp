//Kullanıcıdan bir kelime iste.
//Tersten okununup okunmadığını kontrol et.
//Sonucu ekrana yazdır.

#include <iostream>
using namespace std;

int Palindrom(string, int, int);	//Bu kodda Fonksiyon yardımı ile palindrom bulacağız.

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sonKarakter;	//Son karakter için değişken.
	string kelime;	//Kelimenin variablesi.
	
	cout << "Bir kelime girin: ";	//Kelimenin nokta ile bitmesine gerek yok.
	cin >>kelime;
	
	sonKarakter = kelime.length();	//Kelimenin uzunluğu
	Palindrom(kelime, 0, sonKarakter-1);	//Fonksiyonu çağırma.
}


int Palindrom(string kelime, int ilkKarakter, int sonKarakter)	//Fonksiyonumuz.
{
	if(kelime[ilkKarakter] == kelime[sonKarakter])	//Kontroller
	{
		if(sonKarakter > ilkKarakter)
		{
		Palindrom(kelime, ilkKarakter+1, sonKarakter-1);	//Kelimenin sağından ve solundan harf kontrolü.
		}
		
		else
		{
		cout<<"Bu kelimenin tersten okunuşu aynıdır !";	//Doğru sonuç.
		}
	}
	
	else
	{
	cout<<"Bu kelimenin tersten okunuşu aynı değildir !";	//Yanlış sonuç.
	}
	
	cout << "\n\n";
	
return main();	//Sürekli tekrar etsin.
}
