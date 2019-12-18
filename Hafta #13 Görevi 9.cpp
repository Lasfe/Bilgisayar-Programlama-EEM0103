//10 elemanlı diziden çift olanları bulma
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ciftBul(int [],int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	int dizi[10];
	srand(time(0));
	
	for(int i=0;i<10;i++)
	{
	dizi[i]=rand();
	cout<<"dizi["<<i<<"]="<<dizi[i]<<endl;
	}
	ciftBul(dizi,10);
	
return 0;
}

void ciftBul(int dizi[],int n)
{
	for(int i=0;i<10;i++)
	if(dizi[i]%2==0)
	cout<<" \n Dizinin "<<"'"<<i<<"'"<<" indexi çifttir ="<<dizi[i]<<endl;
}
