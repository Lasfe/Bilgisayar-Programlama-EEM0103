//Dört işlemi yapabilen hesap makinesi :) (Bölüm işleminin anlamlı rakam sayısının nasıl ayarlanabildiğini sor!)
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double x,y;
	int z;
  
	cout<<"Birinci Sayıyı Giriniz : ";
	cin>>x;
	cout<<"Ikinci Sayıyı Giriniz : ";
	cin>>y;
  
	cout<<"Yapmak istediğiniz işlemi seçin \nToplama işlemi için 1\nÇıkarma işlemi için 2\nÇarpma işlemi için 3\nBölme işlemi için 4\ntuşlayınız."<<endl;
	cin>>z;
  
	switch (z){
		case 1:{
			cout<<"Sonuç : "<<x+y<<endl;
			break;
			     }
		case 2:{
			cout<<"Sonuç : "<<x-y<<endl;
			break;
				   }
		case 3:{
			cout<<"Sonuç : "<<x*y<<endl;
			break;
				   }
		case 4:{
			cout<<"Sonuç : "<<x/y<<endl;
			break;
				   }
		default:{
			cout<<"HATALI İŞLEM !!!";
			break;
				   }
			      }
            
return 0;
}
