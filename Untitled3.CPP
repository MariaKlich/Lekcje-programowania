#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int wylosowane=0;
    int liczba;
    int a;
    cin>>a;
    int b;
    cin>>b;
   while(wylosowane<30)
    {
        liczba=rand()%100+1;
        liczba=rand()%(b-a)+a;
        cout<<wylosowane+1 <<". "<<liczba<<endl;
        wylosowane++;
}
return 0;
}
