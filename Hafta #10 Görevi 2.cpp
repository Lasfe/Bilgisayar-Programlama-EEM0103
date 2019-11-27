//Fonksiyon ile ax+b=0 denkleminin çözümü
#include <iostream> 
#include <cmath> 
using namespace std; 

double Kok(int,int);		//fonksiyon prototipi veya imzası (signature) 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int a,b; 

  cout<<"Sırasıyla a ve b değerlerini giriniz : "<<endl; 
  cin>>a>>b;
  
  while(a==0)
  {
  	cout<<"a değeri 0 olursa denklemi çözemem.Lüften a değerini tekrar gir.";
  	cin>>a;
  }
	
cout<<"Denklemin Kökü: "<<Kok(a,b)<<endl; 

return 0; 
} 

//fonksiyon tanımı 


double Kok(int a, int b) 
{ 
return -b/a; 
}
