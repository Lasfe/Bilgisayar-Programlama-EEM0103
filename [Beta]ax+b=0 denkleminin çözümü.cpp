//ax+b=0 denkleminin çözümü 
#include <iostream> 
#include <cmath> 
#include <locale.h> 
#define pi = 3,14     //Neden ? 
using namespace std; 
int main ()
{ 
  setlocale(LC_ALL,"Turkish"); 
  double x,a,b; 
  
  cout<<"ax+b denklemini çözelim"; 
  
  cout<<"\na değerini gir : "; 
  cin>>a; 

  if(a == 0) 

  cout<<"\na 0 olursa x\'i bulamayız :("; 


  else
  { 
  cout<<"b değerini gir : "; 
  cin>>b; 

  x = -b/a; 

  cout<<"x\'in değeri : "<<x;  
  } 

return 0; 
} 
//Kodun doğruluğundan emin olunmalı 
