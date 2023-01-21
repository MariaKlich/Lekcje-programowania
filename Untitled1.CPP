#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a,b,c,d,e;
    a=rand()%100+1;
    b=rand()%100+1;
    c=rand()%100+1;
    d=rand()%100+1;
    e=rand()%100+1;

        cout<<a<<"  "<<endl;
        cout<<b<<"  "<<endl;
        cout<<c<<"  "<<endl;
        cout<<d<<"  "<<endl;
        cout<<e<<"  "<<endl;
   {
    int najw=-1;
    int najm=101;
    if(najw<a)
    najw=a;
    if(najw<b)
    najw=b;
    if(najw<c)
    najw=c;
    if(najw<d)
    najw=d;
    if(najw<e)
    najw=e;
    cout<<"   Najwieksza liczba jest:  "<<najw<<endl;
    if(najm>a)
    najm=a;
    if(najm>b)
    najm=b;
    if(najm>c)
    najm=c;
    if(najm>d)
    najm=d;
    if(najm>e)
    najm=e;

    cout<<"  Najmniejsza liczba jest:   "<<najm<<endl;
   }

}



