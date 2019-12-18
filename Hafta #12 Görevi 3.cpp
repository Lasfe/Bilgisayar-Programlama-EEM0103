//Diziler(Arrays).
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  setlocale(LC_ALL,"Turkish");
  int n[] = { 10, 20, 30, 40, 50};  //Değerleri kendimiz atadık.
  
  cout<<"Eleman"<<setw(10)<<"Değer"<<endl;
  
  for(int j=0;j<5;j++)
  cout<<setw(5)<<j+1<<setw(10)<<n[j]<<endl;
  
 return 0;
 }
 
 /*
int n[] = { 10, 20, 30, 40, 50};
for(int j=0;j<5;j++)
cout<<n[j]<<"\t";
return 0;
*/
