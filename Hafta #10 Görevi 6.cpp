//Fonksiyon kullanarak Palindrom Sayı bulma.
#include <iostream>
using namespace std;

int Palindrom(int);
int a,b,c,d,e;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	
	cout<<"5 basamaklı bir sayı giriniz.";
	cin>>sayi;
	
	while(sayi<=10000 || sayi>=99999)
	{
		cout<<"Girilen sayı 5 basamaklı değildir.Lütfen sayıyı tekrar girin."<<endl;
		cin>>sayi;
	}
	
	if(Palindrom(sayi)==0)
	{
		cout<<"Girilen sayı palindrom sayıdır."<<endl;
	}
	
	else
	{
		cout<<"Girilen sayı palindrom sayı değildir."<<endl;
	}
	
return 0;
}

int Palindrom(int sayi)
{
	int palindrom;
	
	a=sayi/10000;
	b=(sayi%10000)/1000;
	c=(sayi%1000)/100;
	d=(sayi%100)/10;
	e=sayi%10;
	
	if(a==e && b==d)
	{
		palindrom=0;
	}
	
	else
	palindrom=1;
	
return palindrom;
}
