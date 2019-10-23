// 40-4 arasında 4 ile bölünen sayıların gösterimi ve bunların ortalama ve toplmaının gösterimi
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayac,toplam;
	double ortalama;
	toplam=0;
	cout<<"40 ile 4 arasında 4 ile bölünebilen sayılar : \n"<<endl;
	for( int i=4;i<=40;i++)
	{
		if(i%4==0)
		{
			toplam=toplam+i;
			sayac=sayac+1;
			cout<<""<<i<<"\n"<<endl;
		}
	}
	cout<<"\n40 ile 4 arasında 4 ile bölünebilen sayıların toplamı : "<<toplam<<endl;
	ortalama=static_cast<double>(toplam)/sayac;
	cout<<"40 le 4 arasında 4 ile bölünebilen sayıların ortalaması : "<<setprecision(2)<<ortalama<<endl;
return 0;
}
