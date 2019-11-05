//100 den küçük sayıların (0 hariç) 3 ile bölümünden kalanları değerlendir ve tam bölünenleri toplayıp bunların ortalamasını bul.
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
	
  if(i%3==0)
	{
	cout<<"\t3 ile Tam Bölünür";
	toplam=i+toplam;
	
  cout<<" \t"<<toplam<<endl;
	sayac=1+sayac;
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
