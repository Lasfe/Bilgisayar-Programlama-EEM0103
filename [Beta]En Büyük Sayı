//Kulanıcıdan 3 sayı girmesini iste en buyuk sayı fonksiyonda bulunup döndürülüp ekrana basılsın 
#include <iostream> 
#include <locale.h> 
using namespace std; 
float Max(float,float,float); 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  float s1,s2,s3; 
  
  cout<<"3 tane sayı girin : "<<endl; 
  cin>>s1>>s2>>s3; 

  cout<<"En büyük sayı : "<<Max(s1,s2,s3); 

return 0; 
} 

  float Max(float s1, float s2, float s3) 
{ 
  float enBuyuk=s1; 
  
  if(s1<s2) 
  
  enBuyuk=s2; 

  
  if(s2<s3) 

  enBuyuk=s3; 

return enBuyuk; 
} 
