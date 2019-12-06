//Recursive BTÜ sayıları.
#include <iostream>
using namespace std;

int BTU(int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	cout<<"İlk 20 BTÜ Sayısı"<<endl;
	for(int i=1;i<=20;i++)
	{
		cout<<i<<". BTÜ Sayısı = "<<BTU(i)<<endl;
	}
return 0;
}

int BTU(int sayi)
{
	if(sayi==1)
	{
		return 0;
	}
	
	if(sayi==2)
	{
		return 1;
	}
	
	if(sayi==3)
	{
		return 2;
	}
	
	else
	return BTU(sayi-1)+BTU(sayi-2)+BTU(sayi-3);
}

//BTÜ Sayılarını göstermenin farklı bir yolu :)
