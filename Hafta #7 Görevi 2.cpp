//Herhangi bir basamaklı sayının rakamlar toplamı
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi=0;
	int rakam=0;
	int toplam=0;
	cout<<"Bir sayı giriniz = ";
	cin>>sayi;
	
	while(sayi>0)
	{
		rakam=sayi%10;
		toplam=toplam+rakam;
		sayi=sayi/10;
		cout<<toplam<<","<<endl;
	}
	cout<<"\n"<<toplam;

return 0;
}
