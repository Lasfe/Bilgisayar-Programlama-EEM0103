//Herhangi bir basamaklı sayının rakamlar toplamı
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi,basamak,toplam=0;
	
	cout<<"Bir sayı giriniz = ";
	cin>>sayi;
	
	for(int i=10;i<=(sayi*10);i=i*10)
	{
	basamak=((sayi%i)/(i/10));
	toplam=toplam+basamak;
	}
	cout<<"Rakamlar toplamı = "<<toplam;

return 0;
}
