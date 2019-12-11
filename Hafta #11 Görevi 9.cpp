//Bu görev daha önce yapıldı ama GitHub'a 11.12.2019 tarihinde eklendi.
#include <iostream>
#include <cmath>
using namespace std;

int MukemmelSayi(int);
int main()
{
int x=1,y;
setlocale(LC_ALL,"Turkish")
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
