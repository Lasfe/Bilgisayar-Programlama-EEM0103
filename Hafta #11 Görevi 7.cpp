//Sayı tahmin oyunu.(Normalde bu görev daha önce yapıldı ama 09.12.2019 tarihinde GitHub'a eklendi)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  setlocale(LC_ALL,"Turkish");
  int sayi,i;
  int sayac=0;
  cout<<"0-100 arasında bir sayı tahmin edin: "<<endl;
  cin>>sayi;
  while(sayi>100 || sayi<0)
  {
  cout<<"Lütfen geçerli bir sayı girin: "<<endl;
  cin>>sayi;
  sayac=sayac+1;
  }
  srand(time(0));
  i=rand()%101;
  while(sayi!=i)
{
  if(sayi<i)
  {
  cout<<"Girilen sayı tahmin edilenden daha küçük tekrar dene: "<<endl;
  cin>>sayi;
  sayac=sayac+1;
  }
  else if(sayi>i)
  {
  cout<<"Girilen sayı tahmin edilenden daha büyük tekrar dene: "<<endl;
  cin>>sayi;
  sayac=sayac+1;
  }
}
  if(sayi==i)
  {
  cout<<"Tebrikler tam"<<sayac<<" kez deneyerek kazandınız !"<<endl;
  }
return 0;
}
