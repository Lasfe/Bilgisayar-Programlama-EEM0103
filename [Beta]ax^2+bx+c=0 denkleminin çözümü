//İkinci dereceden bir bilinmeyenli denklemin çözümü ax^2+bx+c=0 
#include <iostream> 
#include <cmath> 
#include <locale.h> 
using namespace std; 

double Kok(double,double,double); //fonksiyon prototipi veya imzası (signature) 
double Delta(double,double,double); 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  double a,b,c; 

  cout<<"Sırasıyla a , b ve c değerlerini giriniz : "<<endl; 
  cin>>a>>b>>c; 

  cout<<"Fonksiyonun Deltasi(Diskriminantı): "<<Delta(a,b,c)<<endl; 
  cout<<"Fonksiyonun Kökü: "<<Kok(a,b,c)<<endl; 

return 0; 
} 

//fonksiyon tanımı 

double Delta(double b, double a, double c) 
{ 
return pow(b,2)-4*a*c; 
} 

double Kok(double a, double b, double delta) 
{ 
return (-b-sqrt(delta))/2/a; 
} 
//Deneme sayısı arttılılıp kodun doğruluğu kontrol edilmeli 
