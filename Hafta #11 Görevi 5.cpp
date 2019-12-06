//Recursive fibonacci sayıları.
#include <iostream>
using namespace std;

int Fibonacci(int);

int main()
{
	setlocale(LC_ALL,"Turkish");
	cout<<"Fibonacci dizisinin ilk 20 elemanı"<<endl;
	for(int i=1;i<=20;i++)
	{
		cout<<i<<". eleman = "<<Fibonacci(i)<<endl;
	}
return 0;
}

int Fibonacci(int sayi)
{
	if(sayi==1)
	{
		return 0;
	}
	
	if(sayi==2)
	{
		return 1;
	}
	
	
	else
	return Fibonacci(sayi-1)+Fibonacci(sayi-2);
}

/*Fibonacci sayıları kendisinden önceki ilk 2 terimimin toplamı şeklinde devam eden bir dizidir.
Dizinin ilk iki elemanı 1 dir
*/
