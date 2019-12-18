//Soru 1 Dizi
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int Buyukluk(int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	int dizi[20];	//20 elemanlı dizi.
	int kontrol;
	int x;
	
	srand(time(0));	//Her çalıştırmada farklı sayılar.
	
	for(int x=0;x<20;x++)	//Döngü ile sayıları doldurma işlemi.
	{
	dizi[x]=rand()%10+27;	//Dizinin aralığı.
	}
	
	if(dizi[x]>dizi[x+1])	//Küçükten büyüğe sıralama.
	{ 
	kontrol=dizi[x];
	dizi[x]=dizi[x+1];
	dizi[x+1]=kontrol;
	}
	
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;
	
	for(int y=0;y<20;y++)
	cout<<setw(6)<<y+1<<setw(13)<<dizi[x]<<endl;	//Elemanları ekrana yazdırma.
	
	//En büyük ve en küçük elemanı yazdırma
	/*
	cout<<"Dizinin en büyük elemanı ="<<needbig<<endl;
	cout<<"Dizinin en küçük elemanı ="<<needsmall<<endl;
	*/
	
}

int Buyukluk(int a)	//En büyük ve en küçük elemanın tesbiti.
{

}

/*
Worked !!!

//Soru 1
#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
#include <ctime> //to use srand
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish"); //to use Turkish language
	int dizi[20];
	int enBuyuk, enKucuk,temp;
	srand(time(0)); //to get different elements in every run
	
	for(int i=0; i<20; i++)
	dizi[i]=rand()%10+27;	
	cout<<"Eleman"<<setw(14)<<"Değer"<<endl;
	
	for(int j=0; j<20; j++)
	{
		cout<<setw(3)<<j+1<<setw(16)<<dizi[j]<<endl;
	}
	
	for(int i=0; i<20; i++)  //have to find a way to use it in func
	{
		if(dizi[0] < dizi[i])
    	dizi[0] = dizi[i];
	}
    
    cout<<"\n En büyük sayı: "<<dizi[0]<<endl;

	for(int i=0; i<20; i++) //have to find a way to use it in func
	{
		if(dizi[0] > dizi[i])
    	dizi[0] = dizi[i];
	}
	cout<<"\n En küçük sayı: "<<dizi[0]<<endl;	

	for(int i=0;i<20-1;i++) // to sort numbers 
	{
		for(int j=0;j<20-1;j++) 
		{ 
			if(dizi[j]>dizi[j+1]) 
			{ 
			temp=dizi[j]; 
			dizi[j]=dizi[j+1]; 
			dizi[j+1]=temp; 
			} 
		}
	}
	cout<<"\n Küçükten büyüğe sıralama: "<<endl<<endl;
	for (int i=0;i<20;i++)
	cout<<" "<<dizi[i]<<" ";
	return 0;	
}

*/
