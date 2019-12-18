//Soru 1 Dizi
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int Buyukluk(int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	int dizi[20];	//20 elemanlı dizi.
	int kontrol;
	int x;
	
	srand(time(0));	//Her çalıştırmada farklı sayılar.
	
	for(int x=0;x<20;x++)	//Döngü ile sayıları doldurma işlemi.
	{
	dizi[x]=rand()%10+27;	//Dizinin aralığı.
	}
	
	if(dizi[x]>dizi[x+1])	//Küçükten büyüğe sıralama.
	{ 
	kontrol=dizi[x];
	dizi[x]=dizi[x+1];
	dizi[x+1]=kontrol;
	}
	
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;
	
	for(int y=0;y<20;y++)
	cout<<setw(6)<<y+1<<setw(13)<<dizi[x]<<endl;	//Elemanları ekrana yazdırma.
	
	//En büyük ve en küçük elemanı yazdırma
	/*
	cout<<"Dizinin en büyük elemanı ="<<needbig<<endl;
	cout<<"Dizinin en küçük elemanı ="<<needsmall<<endl;
	*/
	
}

int Buyukluk(int a)	//En büyük ve en küçük elemanın tesbiti.
{

}

/*
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
		cout <<"Bu kelimenin tersten okunuşu aynıdır!"; 
		}
	}
	
	else
	{
	cout <<"Bu kelimenin tersten okunuşu aynı değildir!";
	}
	
	cout << "\n\n";
	
return main();
}
*/
