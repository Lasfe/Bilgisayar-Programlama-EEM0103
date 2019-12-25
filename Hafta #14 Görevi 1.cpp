//String kullanımı.
#include <iostream>
using namespace std;
int main()
{
	char string1[20];	//20 karakter saklayan bir dizi (NULL dahil)
	char string2[]="String Dizisi";	//14 karakter rezerve edilir (NULL dahil)
	cout<<"\"Bilgisayar Programlama Dersi\"yaz";
	cin>>string1;	//string1 içerisine sadece Bilgisayar atanır. Programlama ve Dersi kelimeleri input buffer içerisinde okunmayı bekler
	cout<<"1.String : "<<string1<<"\n2.String : "<<string2;
	for(int i=0;string1[i]!='\0';i++)	//NULL karaktere kadar stringi ekrana boşluklu olarak yazar.
	cout<<string1[i]<<'\0';
	cin>>string1;	//input buffer'dan Programlama'yı oku ve string1'e ata.
	cout<<"\n1.String : "<<string1<<endl;
	cin>>string1;	//input buffer'dan Dersi'yi oku ve yeniden string1'e ata.
	cout<<"\n1.String : "<<string1<<endl;
	}	
