//Fonksiyon ile küp alma
#include <iostream>
using namespace std;

int KupunuAl(int); //int al int döndür [fonksiyon prototipi veya imzası (signature)]

int main()
{
	for(int i=1;i<=10;i++)
	cout<<KupunuAl(i)<<endl;
	return 0;
}

//fonksiyon tanımı
int KupunuAl(int y) //int y al int döndür
{
	return y*y*y;
}
