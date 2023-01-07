#include <iostream>

using namespace std;

    bool czyJednocyfrowaINieparzysta(int x){
    return (x<10&&x>-10&&x%2!=0);
    }
int main()
{
    int liczba=1;
    do{
    cin>>liczba;
    if(liczba==0){
    break;
    }
   cout<<czyJednocyfrowaINieparzysta(liczba)<<endl;
}   while(liczba!=0);
}
