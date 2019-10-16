//Eleman sayısına göre rastgele bir dizi oluşturma 
#include <iostream> 
#include <stdlib.h> 
#include <locale.h> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int sayi,enbuyuk=0; 

  cout<<"Dizinin eleman sayısını giriniz : "; 
  cin>>sayi; 

  int sayilar[sayi]; 
  
  for(int i = 0; i<sayi;i++) 

  {sayilar[i]=rand()%100; 
  }

  cout<<"Diziye atanan rastgele elemanlar : "<<endl; 

  for(int i = 0;i<sayi;i++){ 

  if(sayilar[i]>=enbuyuk){ 

  enbuyuk=sayilar[i]; 
                         } 

   cout<<sayilar[i]<<"\t"<<endl; 
}     
  
  cout<<"En Büyüğü = "<<enbuyuk; 

return 0; 
} 
