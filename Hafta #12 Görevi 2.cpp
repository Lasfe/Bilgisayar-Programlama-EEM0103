//Diziler(Arrays).
#include <iostream>
#include <iomanip>	//setw için (setw=set width)
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int n[10];
	
	for(int i=0;i<10;i++)
	n[i]=0;
	cout<<"Eleman"<<setw(13)<<"Değer"<<endl;
	
	for(int j=0;j<10;j++)
	cout<<setw(6)<<j+1<<setw(13)<<n[j]<<endl;
  
  //cout<<"Eleman"<<setw(20)<<"Değer"<<endl;
	//for(int j=0;j<10;j++)
	//cout<<setw(6)<<j+i<<setw(10)<<n[j]<<endl;
  
 return 0;
 }
