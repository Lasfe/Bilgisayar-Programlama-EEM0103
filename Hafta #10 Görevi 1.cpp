//Hafta #10 ax+b=0 denkleminin çözümü
#include <iostream> 
#include <cmath> 
using namespace std; 

double a,b;
int main()
{
	setlocale(LC_ALL,"Turkish");
	while(a==0)
	{
		cout<<"A değerini giriniz :";
		cin>>a;
		cout<<"B değerini giriniz :";
		cin>>b;
	}
	
	if(a!=0)
	{
		cout<<"Kök = "<<-b/a<<endl;
	}
	
return 0;
}
