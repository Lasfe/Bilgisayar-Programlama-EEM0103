//1-100 arası sayma sayıların ortalaması for döngüsü ile Hafta #5
#include <iostream>  
#include <iomanip>  
#include <locale.h>  
using namespace std;  
int main()  
{  
	setlocale(LC_ALL,"Turkish");  
	double ortalama;  
	int toplam,i,sayac;  
	toplam=0;  
	sayac=0;  
	
  for(i=0;i<=100;i=i+1)  
	{  
	toplam=toplam+i;  
	sayac=sayac+1;  
	}  
	ortalama=static_cast<double>(toplam)/(sayac-1);  
	
	cout<<"Ortalama : "<<setprecision(5)<<ortalama<<endl;
	cout<<"Toplam : "<<toplam<<endl; 

return 0;  
}
