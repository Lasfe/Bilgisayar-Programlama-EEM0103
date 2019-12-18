//Soru 2 Palindrom kelimeler.
#include <iostream>
using namespace std;

int Palindrom(string, int, int);	//Bu kodda Fonksiyon yardımı ile palindrom bulacağız.

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sonKarakter;
	string kelime;
	
	cout << "Bir kelime girin: ";	//Kelimenin nokta ile bitmesine gerek yok.
	cin >>kelime;
	
	sonKarakter = kelime.length();	//Kelimenin uzunluğu
	Palindrom(kelime, 0, sonKarakter-1);
}

int Palindrom(string kelime, int ilkKarakter, int sonKarakter)	//Fonksiyonumuz.
{
	if(kelime[ilkKarakter] == kelime[sonKarakter])	//Kontroller
	{
		if(sonKarakter > ilkKarakter)
		{
		Palindrom(kelime, ilkKarakter+1, sonKarakter-1);
		}
		else
		{
		cout << "'" << kelime << "' Bu kelimenin tersten okunuşu aynıdır!"; 
		}
	}
	
	else
	{
	cout << "'" << kelime << "' Bu kelimenin tersten okunuşu aynı değildir!";
	}
	
	cout << "\n\n";
	
return main();
}
