//Rastgele sayı üretme.
#include <iostream>
#include <cstdlib> //rand() fonksiyonu için
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	cout<<"Üretebilecek Maksimum Sayı:"<<RAND_MAX<<endl;
	
	for(int i=1;i<=20;i++)
	{
		cout<<(1+rand()%6)<<endl;
	}
return 0;	
}

/*
Rastgele sayı mantığı şu şekildedir.Bilgisayar bir çekirdek(seed)değerine göre max 32767 olacak şekilde bir sayıyı hafızaya atar.
rand() ile o değeri çağırırız.Eğer rand()%6 olursa bu 0-5 arası sayılardan herhangi birini tutmasını sağlar.
eğer 1+rand()%6 olursa bu 1-5 arası sayılardan herhangi birini tutmasını sağlar.Biz bu kodda bu işlemin 20 kez yapmasını istedik.
Kod çalıştığı zaman bize 1-5 arası rastgele 20 adet sayı ekrana bastıracaktır.
*/
