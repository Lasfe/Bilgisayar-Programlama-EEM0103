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
	dizi[x]=rand()%37+27;	//Dizinin aralığı.
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
