//En büyük sayıyı bulma
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi3,enBuyuk;
	
	cout<<"Üç adet sayı giriniz."<<endl;
	cin>>sayi1>>sayi2>>sayi3;
	
	if(sayi1==sayi2 || sayi2==sayi3 || sayi1==sayi3)
	{
		cout<<"Girdiğin ilk iki sayı birbirine eşittir.Sayıları tekrar gir.";
		cin>>sayi1>>sayi2>>sayi3;
	}
	
	enBuyuk=sayi1;
	
	if(sayi2>enBuyuk)
	{
		enBuyuk=sayi2;
	}
	
	if(sayi3>enBuyuk)
	{
		enBuyuk=sayi3;
	}
	
	cout<<"Girilen sayılardan en büyüğü ="<<enBuyuk<<endl;
	return 0;	
}
