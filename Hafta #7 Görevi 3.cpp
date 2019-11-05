//1-10 arası tek sayıların toplamı
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");  
	int toplam,i,sayac;  
	toplam=0;  
	sayac=0;  
	
  for(i=1;i<=10;i=i+2)  
	{  
	toplam=toplam+i;  
	sayac=sayac+1;  
	}  
	
	cout<<"Toplam : "<<toplam<<endl; 
	
return 0;
}
