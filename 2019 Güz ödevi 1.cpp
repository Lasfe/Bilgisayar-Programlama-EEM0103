//BTÜ Sayıları
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int birinciBtu=0;
	int ikinciBtu=1;
	int ucuncuBtu=2;
	
	cout<<"1. BTÜ sayısı = "<<birinciBtu<<endl;
	cout<<"2. BTÜ sayısı = "<<ikinciBtu<<endl;
	cout<<"3. BTÜ sayısı = "<<ucuncuBtu<<endl;
	for (int kontrol=4;kontrol<=20;kontrol++)
	{
		int sayi= birinciBtu+ikinciBtu+ucuncuBtu;
		birinciBtu=ikinciBtu;
		ikinciBtu=ucuncuBtu;
		ucuncuBtu=sayi;
		cout<<kontrol<<" . BTÜ sayısı = "<<sayi<<endl;
	}
return 0;
}

//National Academic Network and Information Center
