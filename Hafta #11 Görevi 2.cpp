//Çekirdek değeri gir.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned int seed;
	setlocale(LC_ALL,"Turkish");
	cout<<"Çekirdek değerini giriniz.";
	cin>>seed;
	srand(seed);
	
	for(int i=1;i<=20;i++)
	{
		cout<<(1+rand()%6)<<endl;
	}
return 0;	
}
