//Armstrong sayı 
#include <iostream> 
#include <cmath> 
#include <locale.h> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int a,x,y,z,b,c;  

  for(a=10000; a<=99999 ; a++ ) 
  { 
  x=(a%10)/1; 
  y=(a%100)/10; 
  z=(a%1000)/100; 
  b=(a%1000)/1000; 
  c=a/10000; 

  if((pow(x,5)+pow(y,5)+pow(z,5)+pow(b,5)+pow(c,5))==a) 

  cout<<a<<" bir armstrong sayısıdır."<<endl;     
  } 

return 0; 
} 
//Tanım:Bir sayının her basamağının, sayının basamak sayısı kadar kuvvetini alıp topladığımızda sayının kendisini veriyorsa
bu sayılara armstrong sayılar denir. 
