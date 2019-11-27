//İkinci dereceden bir bilinmeyenli denklemin çözümü ax^2+bx+c=0 
#include <iostream> 
#include <cmath> 
using namespace std; 

double a,b,c,diskriminant;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	cout<<"a değerini giriniz :";
	cin>>a;
	while(a==0)
	{
		cout<<"a değerini 0 girdiniz.Lütfen a değerini 0 dan farklı bir değer giriniz :";
		cin>>a;
	}
	
	cout<<"b değerini giriniz :";
	cin>>b;
	cout<<"c değerini giriniz :";
	cin>>c;
	
	diskriminant=pow(b,2)-4*a*c;
	cout<<"Denklemin Deltası(Diskriminantı): "<<diskriminant<<endl;
	
	if(diskriminant>0)
	{
		cout<<"Denklemin 1.Kökü: "<<(-b-sqrt(diskriminant))/2/a<<endl;
		cout<<"Denklemin 2.Kökü: "<<(-b+sqrt(diskriminant))/2/a<<endl;
	}
	
	else if(diskriminant<0)
	{
		cout<<"Denklemin Reel(Gerçel)kökü yoktur."<<endl;
	}
	
	else
	
	{
		cout<<"Denklemin Kökü :"<<-b/2*a<<endl;
	}
	
		
	
return 0;
}
