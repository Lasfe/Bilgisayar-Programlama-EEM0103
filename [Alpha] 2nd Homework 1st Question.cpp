//27-26 arası rastgele sayılardan oluşan bir dizi.
//Her çalıştırmada farklı bir dizi oluşmalı.
//Dizi 20 elemanlı olmalı.
//Eleman atama işlemi döngü ile yapılmalı.
//Dizinin elemanları en küçükten en büyüğe doğru sıralanmalı.
//Dizinin en büyük ve en küçük elemanı fonksiyon yardımıyla tesbit edilmeli.

// 1.Soru
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int EnBuyuk(int [], int);
int EnKucuk(int [], int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dizi[20];
	int kontrol, enBuyuk, enKucuk;
	
	srand(time(0));
	
	for(int i=0; i<20; i++)
	dizi[i]=rand()%10+27;
		
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;
	
	for (int j=0; j<20; j++)
	{
		cout<<setw(5)<<j+1<<"."<<setw(13)<<dizi[j]<<endl;
	}
	
	cout<<"\n\n";
	
	{
    cout<<"En büyük sayı = "<<EnBuyuk(dizi,20)<<endl;
    
	cout<<"En küçük sayı = "<<EnKucuk(dizi,20)<<endl;
	}
	
	
	for (int i=0; i<20-1; i++) 
	{
		for(int j=0; j<20-1; j++) 
		{ 
			if(dizi[j]>dizi[j+1]) 
			{ 
			kontrol=dizi[j]; 
			dizi[j]=dizi[j+1]; 
			dizi[j+1]=kontrol; 
			} 
		}
	}
	
	cout<<"\n";
	
	{
	cout<<"Elemanların küçükten büyüğe doğru artan sıralaması : \n"<<endl;
	}
	
	for (int i=0; i<20; i++)
	cout<<"|"<<dizi[i]<<" ";
	
return 0;	
}


int EnBuyuk(int dizi[], int n)
{
	for (int i=0; i<20; i++)
	{
		if (dizi[0]<dizi[i])
    	dizi[0]=dizi[i];
	}
	
return dizi [0] ;
}

int EnKucuk(int dizi[], int n)
{
	for (int j=0; j<20; j++)
	{
		if (dizi[0]>dizi[j])
    	dizi[0]=dizi[j] ;
	}
return dizi [0] ;
}

// Bilal BAĞCIOĞLU
// 19332629062
// Elektrik-Elektronik Mühendisliği
