#include <iostream>
#include <fstream> //darbui su bylomis
using namespace std;
int main()
{
   int a, b, c, d, suma;
   ifstream in ("duom.txt");
   ofstream out ("rez.txt");
   in>>a>>b>>c>>d;
     //out>>b;
     suma = a+ b;
     out<<a<<" + "<<b<<" = "<<suma;


   in.close();
   out.close();
 return 0;
}
