//Kelimenin birkaç harfini yıldız yap.
#include <iostream>
using namespace std;
int main ()
{
	char kelime[50];
	int sayac=0;
	cout<<"Bir kelime giriniz :"<<endl;
	cin>>kelime;
	cout<<kelime<<endl;
	
	for(int i=0;kelime[i]!='\0';i++)
	{
	sayac=sayac+1;
	}
	
	cout<<"Bu kelime "<<sayac<<" harflidir."<<endl;
	
	if(sayac<6)
	{
	kelime[2]='*';
	kelime[4]='*';
	}
	else
	{
	kelime[1]='*';
	kelime[6]='*';
	}
	
	cout<<kelime<<endl;
	
return main();
}
