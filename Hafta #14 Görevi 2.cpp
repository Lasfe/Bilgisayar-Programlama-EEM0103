//Kelime yazma.
#include <iostream>
using namespace std;
int main ()
{
	char kelime[50];
	cout<<"Bir kelime giriniz :"<<endl;
	cin>>kelime;
	cout<<kelime<<endl;
	
	for(int i=0;kelime[i]!='\0';i++)
	{
	cout<<kelime[i]<<endl;
	}
	
	kelime[2]='*';
	kelime[5]='*';
	
	cout<<kelime;
	
return main();
}
