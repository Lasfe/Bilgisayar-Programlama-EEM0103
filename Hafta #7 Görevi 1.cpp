//Üç basamaklı bir sayının rakamlarının toplamı
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int toplam,sayi,bolum,a,b,c;
	cout<<"Üç basamaklı bir sayı giriniz = ";
	cin>>sayi;
	
	while(sayi<100 || sayi>999)
	{
		cout<<"Girdiğiniz sayı üç basamaklı değildir!";
		cin>>sayi;
	}
		bolum=sayi%100;
		c=sayi%10;
		b=bolum/10;
		a=(sayi-bolum)/100;
		
		toplam=a+b+c;
		
		cout<<"Rakamlar toplamı = "<<toplam<<endl;

return 0;	
}
