//Vize final
#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int vize,final,sonuc;
	cout<<"Vize notunu giriniz = ";
	cin>>vize;
	cout<<"Final notunu giriniz = ";
	cin>>final;
	
	sonuc=(vize*0.4)+(final*0.6);
	
	if(sonuc>=50)
	{
		cout<<"Geçti!";
	}
	else
	{
		cout<<"Kaldı!";
	}
return 0;
}
