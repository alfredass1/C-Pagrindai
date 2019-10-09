#include <iostream>
using namespace std;
int main()
{
  string vardas, pavarde;
  int amzius;
  cout<<"Sveiki. Koks jusu vardas? ";
  cin>>vardas;
  cout<<"Kiek Jums metu? ";
  cin>>amzius;
  double valiuta;
  cout<<"Kaip finansai?...:) ";
  cin>>valiuta;
  cout<<"Jusu vardas "<<vardas<<". Jums "<<amzius<<" metai ir uzgyvenote "<<valiuta<< "eur "<<endl ;
  int poMetu;
  poMetu = amzius + 1;
  cout<<"po metu jums bus "<<poMetu;




   return 0;
}
