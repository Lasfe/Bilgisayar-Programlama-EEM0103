//Fonksiyon ile kare alma
#include <iostream>
using namespace std;

int KaresiniAl(int); //int al int döndür [fonksiyon prototipi veya imzası (signature)]

int main()
{
	for(int i=1;i<=10;i++)
	cout<<KaresiniAl(i)<<endl;
	return 0;
}

//fonksiyon tanımı
int KaresiniAl(int y) //int y al int döndür
{
	return y*y;
}
