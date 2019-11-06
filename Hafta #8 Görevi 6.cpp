//Fonksiyon ile Armstrong sayı 
#include <iostream> 
#include <cmath> 
using namespace std; 

int Fonksiyon(int,int,int,int);

int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int a,x,y,z,b;  

  for(a=1000;a<=9999;a++) 
  { 
  x=(a%10)/1; 
  y=(a%100)/10; 
  z=(a%1000)/100;
  b=(a%10000)/1000;  

  if(Fonksiyon(x,y,z,b)==a)

  cout<<a<<" bir armstrong sayısıdır."<<endl;     
  } 

return 0; 
}

int Fonksiyon(int x,int y,int z,int b)
{
	return (pow(x,4)+pow(y,4)+pow(z,4)+pow(b,4));
}
