//Girilen kenar uzunluğu kadar yıldızlar ile kare görüntüsü oluştur!
#include <iostream> 
#include <locale.h> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL,"Turkish"); 
  int kenaruzunlugu,yildizlar; 

  cout<<"Karenin kenar uzunluğunu giriniz : "<<endl; 
  cin>>kenaruzunlugu; 

  yildizlar=kenaruzunlugu-2; 

if(kenaruzunlugu>=2 && kenaruzunlugu<=35) 
{ 
  for (int i=0; i<kenaruzunlugu; i++) 

  cout<<"*"; 
  
  cout<<endl; 

  for (int k= 0; k<yildizlar; k++) 
  { 
  cout<<"*"; 

  for(int j=0; j<yildizlar; j++) 

  cout<<"*"; 
  
  cout<<"*"<<endl; 
  } 
  
  for (int i = 0; i<kenaruzunlugu; i++) 
  	{ 
  cout<<"*"; 
  	} 
  cout<<endl; 
} 
  else 
  
  cout<<"Girmiş olduğunuz kenar uzunluğu istenen değerler dışındadır"<<endl; 

return 0; 
}
