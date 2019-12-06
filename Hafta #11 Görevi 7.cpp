//Mükemmel sayı [Fix required]
#include <iostream>
using namespace std;

int main()
{
	int sayi,bolen,toplamBolen;
	cout<<"Araligin ust limitini giriniz."<<endl;
	cin>>sayi;
	
	toplamBolen=0;
	
	cout<<"1 ile"<<sayi<<"arasindaki mukemmel sayilar:"<<" ";
	
	for(int i=2;i<sayi;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				bolen=j;
				toplamBolen=toplamBolen+bolen;
			}
		}
	
		if(toplamBolen=i)
		{
			cout<<" "<<i<<" ";
		}
		toplamBolen=0;
	}
	cout<<endl;
return 0;
}
