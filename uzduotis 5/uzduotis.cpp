#include <iostream>
using namespace std;
int main()
{
   int a, b, c, d, did;
   bool adid, bdid,cdid;
   cout<<"a= "; cin>>a;
   cout<<"b= "; cin>>b;
   cout<<"c= "; cin>>c;
   cout<<"d= "; cin>>d;

   adid = (a>=b) and (a>=c) and (a>=d);
   bdid = (b>=a) and (b>=c)and (b>=d);
   cdid = (c>=a) and (c>=b)and (c>=d);
   if (adid) {did=a;}
       else if (bdid) {did=b;}
          else if (cdid) {did=c;}
              else{did=d;}

   cout<<"didziausias "<<did;



return 0;

}
