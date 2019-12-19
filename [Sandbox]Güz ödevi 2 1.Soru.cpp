//27-26 arası rastgele sayılardan oluşan bir dizi.
//Her çalıştırmada farklı bir dizi oluşmalı.
//Dizi 20 elemanlı olmalı.
//Eleman atama işlemi döngü ile yapılmalı.
//Dizinin elemanları en küçükten en büyüğe doğru sıralanmalı.
//Dizinin en büyük ve en küçük elemanı fonksiyon yardımıyla tesbit edilmeli.

#include <iostream>	//cout ve cin için
#include <iomanip>	//setw için
#include <cstdlib>	//rand() için
#include <ctime>	//time(0) için

using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dizi[20];	//20 elemanlı dizi
	int kontrol, enBuyuk, enKucuk ;	//Kullanılan değişkenler.
	
	srand(time(0));	//Her çalıştırmada farklı elemanlar için.
	
	for(int i=0; i<20; i++)	//Dizinin elemanlarını döngü ile atama işlemi.
	dizi[i]=rand()%10+27;	//27-36 arası rastgele sayılar.
		
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;	//Elemanları ekrana yazdırma.
	
	for(int j=0; j<20; j++)	//Elemanları ekrana yazdırma.
	{
		cout<<setw(6)<<j+1<<setw(13)<<dizi[j]<<endl;
	}
	
	
	//En büyük sayıyı bulma.
	for(int i=0; i<20; i++)  //Bu kısım fonksiyon ile yapılmalı.
	{
		if(dizi[0] < dizi[i])
    	dizi[0] = dizi[i];
	}
    cout<<"\n En büyük sayı: "<<dizi[0]<<endl;
    
    
    //En küçük sayıyı bulma.
	for(int i=0; i<20; i++) //Bu kısım fonksiyon ile yapılmalı.
	{
		if(dizi[0] > dizi[i])
    	dizi[0] = dizi[i];
	}
	cout<<"\n En küçük sayı: "<<dizi[0]<<endl;
	
	
	//Elemanları küçükten büyüğe sıralama.	
	for(int i=0;i<20-1;i++) 
	{
		for(int j=0;j<20-1;j++) 
		{ 
			if(dizi[j]>dizi[j+1]) 
			{ 
			kontrol=dizi[j]; 
			dizi[j]=dizi[j+1]; 
			dizi[j+1]=kontrol; 
			} 
		}
	}
	cout<<"\n Elemanların küçükten büyüğe sıralaması = "<<endl<<endl;
	
	for (int i=0;i<20;i++)
	cout<<" "<<dizi[i]<<" ";
	
return 0;	
}
