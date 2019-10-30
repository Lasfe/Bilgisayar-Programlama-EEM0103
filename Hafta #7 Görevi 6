//ax^2+bx+c denkleminin kökleri ve diskriminantı
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	double a,b,c,delta,x1,x2,kok;
	
	cout<<"Sırasıyla a,b,c değerlerini giriniz = ";
	cin>>a>>b>>c;
	
	delta=pow(b,2)-4*a*c;
	
	if(delta<0)
	{
	cout<<"Kökler sanal(karmaşık)tır.";
	}
	else if (delta>0)
	{
		x1=(-b+sqrt(delta)/(2*a));
		x2=(-b-sqrt(delta)/(2*a));
		cout<<"Kökler = "<<x1<<" ve "<<x2<<endl;
	}
	else
	{
		kok=(-b/(2*a));	
		cout<<"Kök = "<<kok<<endl;
	}
	
	cout<<"Denklemin diskriminantı (deltası) = "<<delta<<endl;
	
return 0;	
}
