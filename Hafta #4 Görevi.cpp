//0-100 arası çift sayıların ortalaması 
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

  for(i=0;i<=100;i=i+2)  
  {  
  toplam=toplam+i;  
  sayac=sayac+1;  
  }  

  ortalama=static_cast<double>(toplam)/(sayac-1);  
  
  cout<<"Ortalama :"<<setprecision(5)<<ortalama<<endl;  

return 0;  
}  
