//100 den küçük sayıların 7 ile bölümünden kalanı inceleme ve bu sayıalrın toplamını ve ortalamasını gösterme
#include <iostream>
#include <iomanip>  
#include <math.h>
#include <locale.h> 
using namespace std;  
int main()  
{  
	setlocale(LC_ALL,"Turkish");
	int toplam,i;
	double ortalama,sayac;
	for(int i=100; i>0; i-=1)  
	{
		
		cout<<i<<" ";
		if(i%7==0)
		{
			cout<<"\t7 ile Tam Bölünür";
			toplam=i+toplam;
			cout<<" \t"<<toplam<<endl;
			sayac=1+sayac;
		}
		else
	{
	cout<<"\t7 ile Tam Bölünemez"<<endl;
	}
}
	ortalama=toplam/sayac;
	cout<<"\tOrtalama : "<<setprecision(4)<<ortalama<<endl;
	cout<<"\tToplam : "<<toplam;
return 0;
}
