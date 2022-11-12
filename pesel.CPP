#include <iostream>

using namespace std;

int main()
{

int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, suma;
    cin>> c1;
    cin>> c2;
    cin>> c3;
    cin>> c4;
    cin>> c5;
    cin>> c6;
    cin>> c7;
    cin>> c8;
    cin>> c9;
    cin>> c10;
    cin>> c11;
suma=0;
        c1=c1*1;
        c2=c2*3;
        c3=c3*7;
        c4=c4*9;
        c5=c5*1;
        c6=c6*3;
        c7=c7*7;
        c8=c8*9;
        c9=c9*1;
        c10=c10*3;
        c11=c11*1;
suma=c1+c2+c3+c4+c5+c6+c7+c8+c9+c10+c11;
//aby uzyskac dostep do ostatniej cyfry sumy robie suma%10:
    if(suma%10==0)
     cout<<"poprawny pesel";
        else
        cout<<"niepoprawny pesel";
}
