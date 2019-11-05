//Cümledeki harf sayısını bulma 
#include <iostream> 
#include <locale.h> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  char harf; 
  int sayi; 

  cout<<"Noktayla biten 2 cümleyi satır satır giriniz : "<<endl; 

  for(int i=1; i<=2;i++) 
  { 
  sayi=0; 
  
  cin>>harf; 

  while(harf!='.'){ 

  if ((harf=='A')||(harf=='a')) 

  sayi++; 
  
  cin>>harf; 
                  } 

  cout<<i<<". cümlede "<<sayi<<" tane A harfi var."<<endl; 
  } 

return 0; 
} 
