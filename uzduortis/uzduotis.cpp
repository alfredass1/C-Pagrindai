#include <iostream>
using namespace std;
int main()
{
    int centuSuma, eurai, centai;
    cout<<"iveskite suma centais";
    cin>>centuSuma;
    eurai = centuSuma / 100;
    centai = centuSuma % 100;
    cout<<centuSuma<<"ct. ="<<eurai<<"eur. "<<centai<<"ct. ";

    return 0;
}
