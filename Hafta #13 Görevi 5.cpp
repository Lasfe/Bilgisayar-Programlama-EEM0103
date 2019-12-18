//Bir dizinin elemanlarının değerlerini toplayan program.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	const int DIZI_BOYUTU=10;	//Dizinin boyutunu saklayan sabit değişken
	int a[DIZI_BOYUTU]={87,68,94,100,83,78,85,91,76,87};
	int toplam=0;
	
	for(int i=0;i<10;i++)
	toplam=toplam+a[i];
	
	cout<<"Dizi elemanlarının toplamı ="<<toplam<<endl;
	
}
