#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int a, b, c, d, did;
   cout<<"a= "; cin>>a;
   cout<<"b= "; cin>>b;
   cout<<"c= "; cin>>c;
   cout<<"d= "; cin>>d;
   //did=max(max(d,a),max(b,c);
   did = max (a,b) ;
   did = max (did,c);
   did = max (did,d);
       cout<<"didziausias "<<did;

 return 0;
}
