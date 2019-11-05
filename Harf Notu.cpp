//Harf Notu 
#include <iostream>  
#include <locale.h>  
using namespace std;  
int main()  
{  
  setlocale(LC_ALL,"Turkish");  
  int sinavNot;  

  cout<<"Sınav Notunuzu Giriniz:";  
  cin>>sinavNot;  

  if(sinavNot>=90)  

  cout<<"Tebrikler Sınavı AA ile Geçtiniz!";  
  

  else if(sinavNot>=80)  

  cout<<"Tebrikler Sınavı BB ile Geçtiniz!";  

  
  else if(sinavNot>=70)  

  cout<<"Tebrikler Sınavı CC ile Geçtiniz!";  

  
  else if(sinavNot>=60)  

  cout<<"Tebrikler Sınavı DD ile Geçtiniz!";  

  
  else  

  cout<<"Maalesef Sınavdan FF ile Kaldınız!";  

return 0;  
}  
