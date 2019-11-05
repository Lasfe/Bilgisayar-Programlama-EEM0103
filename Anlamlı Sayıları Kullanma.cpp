//Anlamlı Rakamları kullanma 
#include <iostream>   
#include <iomanip>   
#include <cmath>   
#include <locale.h>   
using namespace std;   
int main()   
{   
  setlocale(LC_ALL,"Turkish");   
  int toplam, notSayaci, sinavNotu;   
  double ortalama;   
  toplam=0;
  notSayaci=0;   
  
  while(sinavNotu !=-1)   
  {   
  toplam=toplam+sinavNotu;   

  cout<<"\n Öğrencinin aldığı notu giriniz veya -1 yazarak çıkış yapınız : ";   
  cin>>sinavNotu;   

  notSayaci=notSayaci+1;   
  }
  
  ortalama=static_cast<double>(toplam)/(notSayaci-1);   

  cout<<"\n\tSınıf Ortalaması : "<<setprecision(3)<<ortalama<<endl;   

return 0;   
}   
