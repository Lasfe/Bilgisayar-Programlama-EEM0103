//Saçmalayabilen faktöriyel
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi,sayac=1;
	int faktor=1;
	cout<<"Hangi sayının faktöriyelini bulalım?";
	cin>>sayi;
	
	while (sayac<=sayi)
	{
		faktor=faktor*sayac;
		sayac=sayac+1;
		cout<<faktor<<endl;
	}
	cout<<faktor<<endl;
	
return 0;
}
