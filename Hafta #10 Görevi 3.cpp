//En büyük sayıyı fonksiyon ile bulma.Sayılar aynı olursa tekrar girilsin.
#include <iostream>
using namespace std;

int Maksimum(int,int,int);
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi3;
	
	cout<<"Üç adet sayı giriniz."<<endl;
	cin>>sayi1>>sayi2>>sayi3;
	
	while(sayi1==sayi2 || sayi2==sayi3 || sayi1==sayi3)
	{
		cout<<"Girdiğin sayılar birbirine eşit görünüyor.Sayıları tekrar gir.";
		cin>>sayi1>>sayi2>>sayi3;
	}
	
	cout<<"Girilen sayılardan en büyüğü ="<<Maksimum(sayi1,sayi2,sayi3)<<endl;
	return 0;	
}

int Maksimum(int sayi1,int sayi2,int sayi3)

{
	int enBuyuk=sayi1;
	
	if(sayi2>enBuyuk)
	{
		enBuyuk=sayi2;
	}
	
	if(sayi3>enBuyuk)
	{
		enBuyuk=sayi3;
	}
	
	return enBuyuk;
}
