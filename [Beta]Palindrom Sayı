//Beş basamaklı palindrom sayı 
#include <iostream> 
#include <cmath> 
#include <locale.h> 
using namespace std; 
int main() 
{ 
  setlocale (LC_ALL,"Turkish"); 
  int n ,b,j,k,sayi; 
  
  cout<<"Beş basamaklı bir sayı giriniz:"; 
  cin>>sayi; 
  
  if((sayi>=99999)||(sayi<=9999)) 
  
  cout<<"Girdiğiniz sayı 5 basamaklı değildir!!!"<<endl; 

  b=1; 
  j=10000; 

  while(b<=10000 && j<=10000)
  { 
  k=(sayi/b)%10; 
  n=(sayi/j)%10; 
  
  b*=10;  
  j/=10; 
  } 
  
  if(k==n) 

  cout<<"Palindrom bir sayıdır."<<endl; 
  
  
  else 
  
  cout<<"Palindrom bir sayı değildir."<<endl; 

return 0; 
} 
//Tanım:Palindrom, tersten okunuşu da aynı olan cümle, sözcük ve sayılara denilmektedir. 
