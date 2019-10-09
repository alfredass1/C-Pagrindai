#include <iostream>
using namespace std;
int main()
{
    int mazos, likusios, dideles, prekes, likutis, dideleDez, mazaDez;
    cout<<"iveskite prekiu kieki";
    cin>>prekes;
    cout<<"iveskite kiek telpa i didele deze ";
    cin>>dideleDez;
    cout<<"iveskite kiek telpa i maza deze";
    cin>>mazaDez;


    dideles = prekes / dideleDez;
    likutis = prekes  % dideleDez;
    mazos = likutis / mazaDez;
    likusios = mazos % mazaDez;

    cout<<prekes<<"prekes. = "<<dideles<<"dezes."<<mazos<<"mazos dezes"<<likusios<<"likusios prekes";

    return 0;

}
