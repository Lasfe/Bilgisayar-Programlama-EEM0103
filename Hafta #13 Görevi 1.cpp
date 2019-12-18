//Herhangi bir elemanın değerini değişirme.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  setlocale(LC_ALL,"Turkish");
  int a,b;
  int n[] = { 10, 20, 30, 40, 50};
  for(int i=0;i<5;i++)
  {
  	cout<<n[i]<<"\t";
  }
  cout<<"\n"<<endl;
  cout<<"Değiştirmek istediğiniz elemanın değerini ve sayıyı giriniz="<<endl;
  cin>>b>>a;
  n[b-1]=a;
  
  for(int k=0;k<5;k++)
  {
  	cout<<n[k]<<"\t";
  }
  
return 0;
 }
