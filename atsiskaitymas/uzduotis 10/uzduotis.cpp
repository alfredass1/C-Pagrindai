#include <iostream>
using namespace std;
int main()
{
    int v, m, p, vv, vm, nval, nminut;
    bool nespes;
    aa:
    cout<<"Kuriuo laiku mama pradejo gaminti pietus? ";
    cin>>v>>m;
    cout<<"Kiek laiko mama gamina pietus? ";
    cin>>p;
    cout<<"Kada vaikai is lauko grizta namo? ";
    cin>>vv>>vm;

    nminut = m + p;
    nval = v + nminut/60;
    nminut = nminut % 60;
    nval = nval % 24;

    nespes = (vv >= nval and vm >= nminut) && (v<=23 and m<=59);
    if (!nespes) {cout<<"Nespes pagaminti \n"<<nval <<" : " <<nminut;
     goto aa;}
            else if (m == 59) {nval >= v + p; nminut = 0;}
                else {nval >= v; nminut >= m + p;}

    cout<<"Mama spes pagaminti pietus \n"<<nval <<" : " <<nminut;
    return 0;
}
