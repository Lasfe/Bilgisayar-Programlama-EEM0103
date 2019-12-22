//Yarıçap ile hacim,alan ve çevre hesabı
#include <iostream>
#define pi 3.14
using namespace std;


double Hacim(double);
double Alan(double);
double Cevre(double);

int main()
{
	setlocale(LC_ALL,"Turkish");
	int x,r;
	cout<<"Yarıçap giriniz: ";
	cin>>r;
	cout<<"1-Hacim"<<endl<<"2-Alan"<<endl<<"3-Çevre"<<endl;
	cin>>x;
	
	switch(x){
		
	case 1:{cout<<"Hacim: "<<Hacim(r);
	break;
	} 
	case 2:{cout<<"Alan: "<<Alan(r);
	break;
	}
	case 3:{cout<<"Çevre: "<<Cevre(r);
	break;
	}
	
			}
return 0;
}

double Hacim(double r)
{
return (4*pi*r*r*r)/3;
}
double Alan(double r)
{
return pi*r*r;
}
double Cevre(double r)
{
return 2*pi*r;
}
