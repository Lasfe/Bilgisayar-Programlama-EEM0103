//İkinci dereceden bir bilinmeyenli denklemin fonksiyon ile çözümü ax^2+bx+c=0
#include <iostream> 
#include <cmath> 
using namespace std; 

double ArtiKok(double,double,double);
double EksiKok(double,double,double);
double Delta(double,double,double); 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  double a,b,c; 

  cout<<"Sırasıyla a , b ve c değerlerini giriniz : "<<endl; 
  cin>>a>>b>>c;
  
  while(a==0)
	{
  		cout<<"a değerini 0 girdiniz.Lütfen a değerini 0 dan farklı bir değer giriniz :";
  		cin>>a;
	} 

  cout<<"Denklemin Deltası(Diskriminantı): "<<Delta(a,b,c)<<endl; 
  
  if(Delta(a,b,c)>0)
	{
  	cout<<"Denklemin 1.Kökü: "<<ArtiKok(a,b,c)<<endl;
  	cout<<"Denklemin 2.Kökü: "<<EksiKok(a,b,c)<<endl;  
	}

	
	else if(Delta(a,b,c)<0)
	{
		cout<<"Denklemin Reel(Gerçel)kökü yoktur."<<endl;
	}

	else
	{
		cout<<"Denklemin Kökü :"<<-b/2*a<<endl;
	}
	
return 0;
}

double Delta(double a,double b,double c)
{
return pow(b,2)-4*a*c; 
}

double ArtiKok(double a,double b,double Delta)
{
return (-b+sqrt(Delta))/2/a; 
}

double EksiKok(double a,double b,double Delta)
{
return (-b-sqrt(Delta))/2/a;
}
