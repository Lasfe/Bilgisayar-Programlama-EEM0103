//Recursive faktöriyel hesaplama
#include <iostream>
using namespace std;

int Faktoriyel(int);

int main()
{
	for(int i=0;i<=10;i++)
	{
		cout<<i<<"! = "<<Faktoriyel(i)<<endl;
	}
return 0;	//Program sorunsuz sona erdiyse.
}
//Recursive(Rikörsif) faktöriyel hesaplama fonksiyonu tanımı
int Faktoriyel(int sayi)
{
	if(sayi<=1)	//Temel durum
	return 1;
	
	else	//Recursive durum
	return sayi*Faktoriyel(sayi-1);
}

/*
Burada Recursive'nin espirisi şudur:fonksiyon içinde fonksiyonu çağırıp tekrarlı işlem yaptırmamızı sağlar.
Ör = 3!=3*2!, 2!=2*1! gibi.
*/
