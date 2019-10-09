#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    //taip rasom komentara
    float sk, saknis, laipsnis, rezultatas;
    cout<<"sk = "; cin>>sk;
    cout<<"Kokiu laipsniu kelsim? "; cin>>laipsnis;
    saknis=sqrt (sk);
    rezultatas=pow(sk, laipsnis);
    cout<<"i straukus sakni ..."<<saknis<<endl;
    cout<<"pakelus laipsniu .."<<rezultatas;

    return 0;
}

