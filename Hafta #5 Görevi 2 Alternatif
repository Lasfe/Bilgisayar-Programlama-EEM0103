// 1-100 arasında 7 ile bölünen sayıların gösterimi ve bunların ortalama ve toplmaının gösterimi
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayac,toplam;
	double ortalama;
	toplam=0;
	cout<<"1 ile 100 arasında 7 ile bölünebilen sayılar : \n"<<endl;
	for( int i=1;i<=100;i++)
	{
		if(i%7==0)
		{
			toplam=toplam+i;
			sayac=sayac+1;
			cout<<""<<i<<endl;
		}
	}
	cout<<"\n1 ile 100 arasında 7 ile bölünebilen sayıların toplamı : "<<toplam<<endl;
	ortalama=static_cast<double>(toplam)/sayac;
	cout<<"i le 100 arasında 7 ile bölünebilen sayıların ortalaması : "<<setprecision(4)<<ortalama<<endl;
return 0;
}
