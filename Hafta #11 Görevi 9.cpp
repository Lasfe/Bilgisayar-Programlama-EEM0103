//Fonksiyon ile Mükemmel sayı.(Normalde bu görev daha önce yapıldı ama 09.12.2019 tarihinde GitHub'a eklendi)
#include <iostream>
#include <cmath>
using namespace std;

int MukemmelSayi(int);

int main()
{
  setlocale(LC_ALL,"Turkish")
  int x=1,y;
  cout<<"Üst aralığı belirleyiniz :"<<;
  cin>>y;
  
  for(int i=x;i<=y,i++)
    
  if(MukemmelSayi(x)==x)
  {
  cout<<x<<endl;
  x++;
  }
  
  else
  x++;
  
return 0;
}

  int MukemmelSayi(int x)
  {
  int y=0;
    
  for(int i=1;i<=x;i++)
    
  if(x%i==0)
  {
  y+=i;
  }
return y-x;
  }
