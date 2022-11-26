#include <iostream>

using namespace std;
int main()
{
   long long pesel;
   int testow;
    int sprawdzonych=0;
    int suma=0;
   int ostatnia;
   cin>>testow;
   while(sprawdzonych<testow)
   {
   cin>>pesel;
    //11-cyfra
    ostatnia=pesel%10;
   pesel=pesel/10;//pesel/=10;
   suma+=ostatnia*1;//suma=suma+ostatnia*1;
    //10-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*3;
    //9-cyfra
    ostatnia=pesel%10;
    pesel=pesel/10;//pesel/=10;
    suma+=ostatnia*1;//suma=suma+ostatnia*7;
    //8-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*9;
    //7-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*7;
    //6-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*3;
    //5-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*1;
    //4-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*9;
    //3-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*7;
    //2cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*3;
    //1-cyfra
    ostatnia=pesel%10;
    pesel/=10;
    suma+=ostatnia*1;
    if(suma%10==0)
    cout<<"D"<<endl;
    else
    cout<<"N"<<endl;
    (sprawdzonych++);

        }

}
