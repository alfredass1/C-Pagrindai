#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int pirmasSkaicius, antrasSkaicius, rezultatas;
   char veiksmas;
   cout<<"Koks pirmas skaicius?"; cin>>pirmasSkaicius;
   cout<<"Koks antras skaicius?"; cin>>antrasSkaicius;
   cout<<"pasirinkite operacija? (+, -, *, /, ^)"; cin>>veiksmas;
   switch (veiksmas)
   {
      case '+' : rezultatas = pirmasSkaicius + antrasSkaicius; break;
      case '-' : rezultatas = pirmasSkaicius - antrasSkaicius; break;
      case '*' : rezultatas = pirmasSkaicius * antrasSkaicius; break;
      case '/' : rezultatas = pirmasSkaicius / antrasSkaicius; break;
      case '^' : rezultatas = pow(pirmasSkaicius,antrasSkaicius); break;
   }

    cout<<pirmasSkaicius<<veiksmas<<antrasSkaicius<<"="<<rezultatas;

 return 0;
}
