//Needs fix ! (break kısmına 90 yazınca çalışıyor fakat farklı bir değer girince çalışmıyor neden sor!)
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
	for(int i=100; i>=0; i-=1)  
	{
		
		cout<<i<<" ";
		if(i%3==0)
		{
			cout<<"\t3 ile Tam Bölünür";
			toplam=i+toplam;
			cout<<" "<<toplam<<endl;
			sayac=1+sayac;
		 {
			if(i==90)
				break;
		 }
		}
		else
	{
	cout<<"\t3 ile Tam Bölünemez"<<endl;
	}
}
	ortalama=toplam/sayac;
	cout<<"\tOrtalama : "<<ortalama;
return 0;
}
