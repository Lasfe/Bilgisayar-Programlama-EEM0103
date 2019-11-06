//Armstrong sayı 
#include <iostream> 
#include <cmath> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int a,x,y,z;  

  for(a=100;a<=999;a++) 
  { 
  x=(a%10)/1; 
  y=(a%100)/10; 
  z=(a%1000)/100;  

  if((pow(x,3)+pow(y,3)+pow(z,3))==a)

  cout<<a<<" bir armstrong sayısıdır."<<endl;     
  } 

return 0; 
} 
