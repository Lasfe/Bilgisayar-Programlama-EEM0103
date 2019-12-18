//Dizi elemanlarının toplamı
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
  	int n[10];
  	int toplam;
  	int kontrol;
  	
  	srand(time(0));
    
	for(int i=0;i<10;i++)
	{
	n[i]=rand()%16+15;
	}
	
	for(int a=0;a<10;a++)
	{
	toplam=toplam+n[a];
	}
	
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;
	
	for(int j=0;j<10;j++)
	cout<<setw(6)<<j+1<<setw(13)<<n[j]<<endl;
	
	cout<<"Elemanların toplamı ="<<toplam<<endl;
	
return 0;
}
