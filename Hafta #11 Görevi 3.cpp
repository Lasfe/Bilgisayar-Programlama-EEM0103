//Zaman faktörü.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	srand(time(0));
	cout<<"Saatin Tam Şu Anki Değeri: "<<time(0)<<endl;

	for(int i=1;i<=20;i++)
	{
		cout<<(1+rand()%6)<<endl;
	}
return 0;	
}
