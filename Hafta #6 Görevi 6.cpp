//Sayıların en büyük değerini gösterme 
#include <iostream>  
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  float a,b,c,enbuyuk; 

  cout<<"Birinci sayıyı giriniz : "; 
  cin>>a; 

  cout<<"İkinci sayıyı giriniz : "; 
  cin>>b; 

  cout<<"Üçüncü sayıyı giriniz : "; 
  cin>>c; 

  enbuyuk=a; 

  if(b>enbuyuk) 
  enbuyuk=b; 

  
  if(c>enbuyuk) 
  enbuyuk=c;  
  
  cout<<"En büyük sayı : "<<enbuyuk<<endl; 

return 0; 
} 
