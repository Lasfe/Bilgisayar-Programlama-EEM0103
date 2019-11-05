//0-100 arası sayıların 2 ile bölümünden kalanlar 
#include <iostream>  
#include <cmath>  
using namespace std;  
int main()  
{ 
  int degisken;  
  
  for(degisken=1;degisken<=100;degisken+=1)  

  cout<<degisken<<" \tKalan  :"<<degisken%2<<endl;  

return 0; 
}
