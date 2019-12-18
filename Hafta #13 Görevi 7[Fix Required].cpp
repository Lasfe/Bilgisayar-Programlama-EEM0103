//10 elemanlı dizinin elemanlarının toplamı ve ortalaması.[Need Fix]
#include <iostream>
#include <iomanip>
using namespace std;

int toplam=0;
double ortalama=0;
int a,b,c,d,e,f,g,h,i,j;
int dizi[]={a,b,c,d,e,f,g,h,i,j};

int Ortalama();

int main()
{
	setlocale(LC_ALL,"Turkish");

	cout<<"10 Elemanlı dizinin elemanlarını giriniz."<<endl;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	
	for(int i=0;i<10;i++)
	{
	toplam=toplam+dizi[i];
	}
	  
	cout<<"Dizi Toplamı : "<<toplam<<endl;
    cout<<"Dizi Ortalaması : "<<setprecision(4)<<Ortalama()<<endl;

return main();
}

int Ortalama()
{
	return static_cast<double>(toplam)/10;
}
