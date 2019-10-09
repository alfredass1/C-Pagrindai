#include <iostream>
#include <fstream> //darbui su bylomis
using namespace std;
int main()
{
   int a1, a2, a3, suma1, b1, b2, b3, suma2, c1, c2, c3, suma3;
   ifstream in ("duom.txt");
   ofstream out ("rez.txt");
   in>>a1>>a2>>a3;
     //out>>b;
     suma1 = a1 + a2 + a3 ;
     out<<a1<<" + "<<a2<<" + " <<a3<< " = "<<suma1<<endl;
   in>>b1>>b2>>b3;
     suma2 = b1 + b2 + b3 ;
      out<<b1<<" + "<<b2<<" + " <<b3<< " = "<<suma2<<endl;

   in>>c1>>c2>>c3;
     suma3 = c1 + c2 + c3 ;
      out<<c1<<" + "<<c2<<" + " <<c3<< " = "<<suma3<<endl;

   in.close();
   out.close();

   if (suma1)>suma2 and suma1>suma3 {cout<<"aidas \n";)
     goto aa;}
            else if (suma2>suma1) && {nval >= v + p; nminut = 0;}
                else {suma1 >suma2 && suma3>=}


 return 0;
}
