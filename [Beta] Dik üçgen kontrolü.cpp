//Dik üçgen kontrolü
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int dik1,dik2,hipo;
	char cevap='e';
	while(cevap == 'E' || cevap == 'e')
	{
	cout<<"1.Dik Kenar: ";
	cin>>dik1;
	cout<<"2.Dik Kenar: ";
	cin>>dik2;
	cout<<"Hipotenüs: ";
	cin>>hipo;
	
	if(pow(dik1,2) + pow(dik2,2) == pow(hipo,2))
	
	{
	cout << "Bu bir dik ucgendir." << endl;
	}
	
	else
	{
	cout << "Bu bir dik ucgen degildir." << endl;
	}
	
	cout << "Devam etmek istiyor musunuz? ";
	cin >> cevap;
	
	}
	
return 0;
}
