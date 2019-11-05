//Sınav Notu 
#include <iostream>  
#include <locale.h>  
using namespace std;  
int main()  
{  
  setlocale(LC_ALL,"Turkish");  
  int sinavNot;  
  
  cout<<"Sınav Notunuzu Giriniz:";  
  cin>>sinavNot;  

  if(sinavNot>=50)  

  cout<<"Tebrikler Sınavı Geçtiniz!";  

  else 

  cout<<"Maalesef Sınavdan Kaldınız!";  
  
return 0;  
}  
