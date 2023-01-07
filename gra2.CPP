#include <iostream>

using namespace std;

int main()
{
    int liczba=1;
    do{
    cin>>liczba;
    if(liczba==0){
    break;
    }
    cout<<(liczba<10&&liczba>-10&&liczba%2!=0)<<endl;
}   while(liczba!=0);
}
